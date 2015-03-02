AM_CPPFLAGS = $(RN_CPPFLAGS) -iquote$(top_srcdir)/Source
AM_CXXFLAGS = $(RN_CXXFLAGS) $(BOOST_CPPFLAGS)
AM_LDFLAGS = $(RN_LDFLAGS) $(BOOST_LDFLAGS)

LIBS = $(RN_LIBS)

AUTOMAKE_OPTIONS = subdir-objects

#librpc3.a: static library
lib_LIBRARIES = librpc3.a

librpc3_a_SOURCES = \
	RPC3.cpp

rpc3headersdir = $(pkgincludedir)/RPC3
rpc3headers_HEADERS = \
	RPC3_Boost.h \
	RPC3.h
