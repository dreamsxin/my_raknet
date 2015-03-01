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
AC_INIT([raknet], [4.81], [rakkar@jenkinssoftware.com])
:${CXXFLAGS=""}
:${CFLAGS=""}
AM_INIT_AUTOMAKE
LT_PREREQ([2.2])
LT_INIT([dlopen])

AC_CONFIG_SRCDIR([Source/DS_QueueLinkedList.h])
#AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_PREFIX_DEFAULT([/usr])
AM_SILENT_RULES

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_LANG([C++])

#
AC_SUBST(RN_CPPFLAGS)
AC_SUBST(RN_CXXFLAGS)
AC_SUBST(RN_LDFLAGS)
AC_SUBST(RN_LIBS)
#
RN_CPPFLAGS=
# default build: Release
RN_CXXFLAGS=
buildtype=
AC_ARG_ENABLE([relwithdebinfo],
	AS_HELP_STRING([--enable-relwithdebinfo],
		[@<:@=yes@:>@ enable Release with Debug info mode (disabled by default)]),
    [relwithdebinfo=${enableval}],
    [relwithdebinfo=no]
    )
AC_ARG_ENABLE([debug],
	AS_HELP_STRING([--enable-debug],
		[@<:@=yes@:>@ enable Debug mode (disabled by default)]),
    [debug=${enableval}],
    [debug=no]
    )

AS_IF(
		#RelWithDebInfo
	[test "x${relwithdebinfo}" != xno],
	[buildtype=RelWithDebInfo
	RN_CXXFLAGS="-O2 -g -fmessage-length=0"],
		#Debug
	[test "x${debug}" != xno],
	[buildtype=Debug
	AC_DEFINE([_DEBUG])
	#AC_DEFINE([DEBUG_FCM2])
	#AC_DEFINE([_DEBUG_LOGGER])
	#AC_DEFINE([_PRINTF_DEBUG])
	RN_CXXFLAGS="-O0 -g3 -Wall -fmessage-length=0"],
		#Release
	[buildtype=Release
	AC_DEFINE([NDEBUG])
	RN_CXXFLAGS="-O3 -w -fmessage-length=0"]
	)	
#
RN_LDFLAGS=
RN_LIBS=

#c++d std headers
AX_CXX_HEADER_STDCXX_98

# Checks for libraries.
required_libraries=
AC_SEARCH_LIBS([pthread_create], 
			   [pthread], 
			   [RN_LIBS="${RN_LIBS} ${ac_cv_search_pthread_create}"], 
			   [required_libraries=${required_libraries}" 'pthread' "])
	
# Checks for header files.
AC_FUNC_ALLOCA
AC_CHECK_HEADERS([arpa/inet.h fcntl.h float.h inttypes.h limits.h locale.h \
		malloc.h memory.h netdb.h netinet/in.h stddef.h stdint.h \
		stdlib.h string.h string.h strings.h sys/ioctl.h sys/param.h \
		sys/socket.h sys/time.h termios.h unistd.h wchar.h])

required_headers=
AC_CHECK_HEADER([pthread.h],[],[required_headers=${required_headers}" 'pthread' "])
#
STOP_ON_CHECKS_ERR([$required_libraries],[$required_headers],['RakNet'])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_C_RESTRICT
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_INT8_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_FUNC_MMAP
AC_FUNC_REALLOC
AC_FUNC_STRTOD
AC_CHECK_FUNCS([atexit gethostbyname gethostname gettimeofday inet_ntoa \
		localeconv localtime_r memmove memset mkdir munmap pow \
		select socket sqrt strcasecmp strchr strdup strerror \
		strncasecmp strpbrk strrchr strspn strstr strtoul strtoull])

#----------------------------------------------------------------------------
# Package configuration switches.
#----------------------------------------------------------------------------
#Samples
AC_ARG_ENABLE([samples],
	[AS_HELP_STRING([--enable-samples],
		[@<:@=yes@:>@ enable RakNet sample programs build (disabled by default)])],
    [build_samples=${enableval}
    if test "x${build_samples}" != xno ; then
		build_samples=yes
		# Checks libraries for samples.
		required_libraries=
		# Checks header files for samples.
		required_headers=
		# Checks for typedefs, structures, and compiler characteristics.
		# Checks for library functions.
		AC_CHECK_FUNCS([floor getcwd])
		#
		STOP_ON_CHECKS_ERR([$required_libraries],[$required_headers],['libRocket' sample programs])
	fi
	],
    [build_samples=no]
	)
AM_CONDITIONAL([BUILD_SAMPLES],[test "x$build_samples" == xyes])

#libcat security
AC_ARG_WITH([libcat],
	[AS_HELP_STRING([--with-libcat],
		[@<:@=yes@:>@ with libcat security (default NO)])],
    [libcat_security=yes
    AC_DEFINE([LIBCAT_SECURITY],[1])],
    [libcat_security=no])
AM_CONDITIONAL([RN_LIBCATSECURITY], [test "x${libcat_security}" == xyes])

#----------------------------------------------------------------------------
# Makefiles.
#----------------------------------------------------------------------------
AC_CONFIG_FILES([
		Makefile
		Source/Makefile
		DependentExtensions/Makefile
		DependentExtensions/cat/Makefile
		DependentExtensions/jansson-2.4/src/Makefile
		DependentExtensions/Lobby2/Makefile
		DependentExtensions/miniupnpc-1.6.20120410/Makefile
		DependentExtensions/RPC3/Makefile
		Samples/Makefile
		Samples/Tests/Makefile
		])

#----------------------------------------------------------------------------
# Emit generated files.
#----------------------------------------------------------------------------
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
-build mode: ${buildtype}
-build samples: ${build_samples}
-with libcat security: ${libcat_security}"

if test "x${build_samples}" != xno ; then
	echo "
NOTE: to build as many samples as possible some modifications 
    has been made to Samples directory (wrt original one):
    - directory names with spaces have been replaced with
    others having underscores in place of spaces (this is
    due to autotools limitation);
    - source code of some samples has been modified and 
    for each one a new directory with the '_CORRECTED' 
    suffix has been added."
fi

echo "
-----------------------------------------------------"
