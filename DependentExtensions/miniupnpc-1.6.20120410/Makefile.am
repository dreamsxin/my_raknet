AM_CPPFLAGS = $(RN_CPPFLAGS) -D_GNU_SOURCE
AM_CXXFLAGS = $(RN_CXXFLAGS)
AM_CFLAGS = $(RN_CXXFLAGS)
AM_LDFLAGS = $(RN_LDFLAGS)

LIBS = $(RN_LIBS)

AUTOMAKE_OPTIONS = subdir-objects

#libminiupnpc.a: static library
lib_LIBRARIES = libminiupnpc.a

libminiupnpc_a_SOURCES = \
	connecthostport.c \
	igd_desc_parse.c \
	minihttptestserver.c \
	minisoap.c \
	minissdpc.c \
	miniupnpc.c \
	miniwget.c \
	minixml.c \
	minixmlvalid.c \
	portlistingparse.c \
	receivedata.c \
	upnpc.c \
	upnpcommands.c \
	upnperrors.c \
	upnpreplyparse.c

miniupnpcheadersdir = $(pkgincludedir)/miniupnpc
miniupnpcheaders_HEADERS = \
	bsdqueue.h \
	codelength.h \
	connecthostport.h \
	declspec.h \
	igd_desc_parse.h \
	minisoap.h \
	minissdpc.h \
	miniupnpc.h \
	miniupnpcstrings.h \
	miniupnpctypes.h \
	miniwget.h \
	minixml.h \
	portlistingparse.h \
	receivedata.h \
	upnpcommands.h \
	upnperrors.h \
	upnpreplyparse.h
