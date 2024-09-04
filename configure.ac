AC_INIT([The Harriman-Peikoff Project], [0.00],
	[latentprion@gmail.com], [harikoff],
	[github.com/latentprion/harikoff])

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

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
