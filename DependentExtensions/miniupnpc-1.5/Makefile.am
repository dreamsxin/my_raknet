AM_CPPFLAGS = -iquote$(top_srcdir)/Source $(RN_CPPFLAGS) 
AM_CXXFLAGS = $(RN_CXXFLAGS)
AM_CFLAGS = $(RN_CXXFLAGS)
AM_LDFLAGS = $(RN_LDFLAGS)

LIBS = $(RN_LIBS)

AUTOMAKE_OPTIONS = subdir-objects

#libminiupnpc1.5.a: static library
lib_LIBRARIES = libminiupnpc1.5.a

libminiupnpc1_5_a_SOURCES = \
	connecthostport.c \
	igd_desc_parse.c \
	minisoap.c \
	minissdpc.c \
	miniupnpc.c \
	miniwget.c \
	minixml.c \
	minixmlvalid.c \
	upnpc.c \
	upnpcommands.c \
	upnperrors.c \
	upnpreplyparse.c

miniupnpc15headersdir = $(pkgincludedir)/miniupnpc1.5
miniupnpc15headers_HEADERS = \
	bsdqueue.h \
	codelength.h \
	connecthostport.h \
	declspec.h \
	igd_desc_parse.h \
	minisoap.h \
	minissdpc.h \
	miniupnpc.h \
	miniwget.h \
	minixml.h \
	miniupnpcstrings.h.in \
	upnpcommands.h \
	upnperrors.h \
	upnpreplyparse.h


	