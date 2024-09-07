AC_INIT([The Harriman-Peikoff Project],[0.00],[latentprion@gmail.com],[harikoff],[github.com/latentprion/harikoff])

AC_DEFUN([TEST_IS_NUMBER], [`echo $1 | grep -c '^[0-9]\+$'` -gt 0])
AC_DEFUN([TEST_NOT_NUMBER], [`echo $1 | grep -c '^[0-9]\+$'` -eq 0])

# Safety checks in case user overwritten --srcdir
AC_CONFIG_SRCDIR(core/main.cpp)

# Store the auxiliary build tools (e.g., install-sh, config.sub, config.guess)
# in this dir (build-aux)
AC_CONFIG_AUX_DIR([build-aux])

# Init automake, and specify this program use relaxed structures.
# i.e. this program doesn't follow the gnu coding standards, and doesn't have
# ChangeLog, COPYING, AUTHORS, INSTALL, README etc. files.
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PROG_CC
AC_PROG_CXX

# AC_CHECK_HEADERS([stdio.h])

#	AC_MSG_ERROR([You must set the number of sensors with num_sensors], 1))
AS_IF([test "X$num_sensors" = "X"],
	AC_MSG_ERROR([You must set num_sensors]))
AS_IF([test `echo $num_sensors | grep -c '^[0-9]\+$'` -gt 0],
	AC_MSG_ERROR([num_sensors must be an integer]))
AS_IF([test $num_sensors -lt 1],
	AC_MSG_ERROR([Harikoff needs at least 1 sensor]))

num_sensors_desc="Number of sensors harikoff has direct purview over"
AC_ARG_VAR([num_sensors],
	AS_HELP_STRING([num_sensors=<n>],[$num_sensors_desc]))

AC_DEFINE_UNQUOTED([CONFIG_NUM_SENSORS], [$num_sensors], [$num_sensors_desc])

AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([Makefile core/Makefile])
AC_OUTPUT
