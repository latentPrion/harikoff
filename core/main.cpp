#include <mind.h>

int main(int argc, char **argv)
{
	Mind	mind;

	for (;;)
	{
		AttentionGrabber	currentEmergency = mind.poll();

		if (!currentEmergency)
		{
			// Idle thought's goal is automatically Goal::DRIFT.
			auto idleThought = std::make_shared<IdleThought>();

			mind.focusOn(idleThought);
		}
		else
		{
			Thought::Goal		goal;

			auto urgentThought = std::make_shared<ActiveThought>(currentEmergency);

			if (mind.recognizes(currentEmergency.cause)) {
				goal = Thought::Goal
					::ASSOCIATE_CAUSAL_QUALE_WITH_INTRINSIC_MOTIVATORS;
			}
			else {
				goal = Thought::Goal
					::RESPOND_TO_CAUSAL_QUALE;
			}

			urgentThought->setGoal(goal);
			mind.focusOn(urgentThought);
		}

		mind.execute();
	}

	return 0;
}
