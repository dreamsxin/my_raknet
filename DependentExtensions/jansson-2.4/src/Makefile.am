EXTRA_DIST = jansson.def

AM_CPPFLAGS = $(RN_CPPFLAGS)
AM_CXXFLAGS = $(RN_CXXFLAGS)
AM_CFLAGS = $(RN_CXXFLAGS) \
	-Wall -Wextra -Wdeclaration-after-statement -Werror
AM_LDFLAGS = $(RN_LDFLAGS) \
	-no-undefined \
	-export-symbols-regex '^json_' \
	-version-info 8:0:4	

LIBS = $(RN_LIBS)

AUTOMAKE_OPTIONS = subdir-objects

#libjansson.a: static library
lib_LIBRARIES = libjansson.a

janssonheadersdir = $(pkgincludedir)/jansson
janssonheaders_HEADERS = \
	jansson.h \
	jansson_config.h

libjansson_a_SOURCES = \
	dump.c \
	error.c \
	hashtable.c \
	hashtable.h \
	jansson_private.h \
	load.c \
	memory.c \
	pack_unpack.c \
	strbuffer.c \
	strbuffer.h \
	strconv.c \
	utf.c \
	utf.h \
	value.c
