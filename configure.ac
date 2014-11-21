#                                               -*- Autoconf -*-
# Process this file with auto(re)conf to produce a configure script.
###Standard `configure.ac' Layout###
# Autoconf requirements
# `AC_INIT(PACKAGE, VERSION, BUG-REPORT-ADDRESS)'
# information on the package
# checks for programs
# checks for libraries
# checks for header files
# checks for types
# checks for structures
# checks for compiler characteristics
# checks for library functions
# checks for system services
# `AC_CONFIG_FILES([FILE...])'
# `AC_OUTPUT'

AC_PREREQ([2.69])
AC_INIT([raknet], [1.0], [rakkar@jenkinssoftware.com])
:${CXXFLAGS=""}
AM_INIT_AUTOMAKE
LT_PREREQ([2.2])
LT_INIT([dlopen])

AC_CONFIG_SRCDIR([Source/DS_QueueLinkedList.h])
#AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_PREFIX_DEFAULT([/usr])
AM_SILENT_RULES

#
RN_CPPFLAGS=""
# checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_LANG([C++])
# default RN CXXFLAGS (release mode)
RN_CXXFLAGS="-O3 -w -fmessage-length=0"
buildtype=Release
# checks/sets options
# RN_DEBUG
AC_ARG_ENABLE([debug],
	AS_HELP_STRING([--enable-debug],
		[@<:@=yes@:>@ enable Raknet debug mode (disabled by default)]),
    [debug=${enableval}], [debug=no])
if test "x${debug}" != xno; then
    RN_CXXFLAGS="-O0 -g3 -Wall -fmessage-length=0"
    buildtype=Debug
fi
# libcat security
AC_ARG_WITH([libcat],
	AS_HELP_STRING([--with-libcat],
		[@<:@=yes@:>@ build raknet with libcat security (without by default)]),
    [libcat_security=${withval}], [libcat_security=no])
AM_CONDITIONAL([RN_LIBCATSECURITY], [test "x${libcat_security}" != xno])
if test "x${libcat_security}" != xno; then
    AC_DEFINE([LIBCAT_SECURITY],[1],[Define to 1 to have Raknet with libcat security])
fi

AC_SUBST(RN_CPPFLAGS)
AC_SUBST(RN_CXXFLAGS)

# checks for libraries.
AX_PTHREAD

# Checks for header files.
AC_FUNC_ALLOCA
AC_CHECK_HEADERS([arpa/inet.h fcntl.h float.h limits.h malloc.h memory.h netdb.h netinet/in.h stdint.h stdlib.h string.h sys/ioctl.h sys/socket.h sys/time.h termios.h unistd.h wchar.h])

# checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_INT8_T
AC_C_RESTRICT
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([atexit gethostbyname gethostname gettimeofday inet_ntoa memmove memset mkdir select socket sqrt strcasecmp strerror strncasecmp strpbrk strrchr strstr strtoul strtoull])

AC_CONFIG_FILES([
		Makefile
		Source/Makefile
		DependentExtensions/Makefile
		DependentExtensions/cat/Makefile
		])

AC_OUTPUT

echo
echo \
"-----------------------------------------------------
Raknet version ${PACKAGE_VERSION}

Now type 'make @<:@<target>@:>@'
where the optional <target> is:
	all -->for building all binaries
	install -->for installing everything

Options:
- build mode: ${buildtype}
-----------------------------------------------------"