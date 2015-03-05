AM_CPPFLAGS = $(RN_CPPFLAGS) -iquote$(top_srcdir)/Source
AM_CXXFLAGS = $(RN_CXXFLAGS)
AM_LDFLAGS = $(RN_LDFLAGS)

LIBS = $(RN_LIBS)

AUTOMAKE_OPTIONS = subdir-objects

#liblobby2.a: static library
lib_LIBRARIES = liblobby2.a

liblobby2_a_SOURCES = \
	Lobby2Client.cpp \
	Lobby2Message.cpp \
	Lobby2Plugin.cpp \
	Lobby2Presence.cpp \
	Lobby2ResultCode.cpp \
	Lobby2Server.cpp \
	Rooms/IntervalTimer.cpp \
	Rooms/ProfanityFilter.cpp \
	Rooms/RoomsContainer.cpp \
	Rooms/RoomsErrorCodes.cpp \
	Rooms/RoomsPlugin.cpp \
	Rooms/RoomTypes.cpp

lobby2headersdir = $(pkgincludedir)/Lobby2
nobase_lobby2headers_HEADERS = \
	Lobby2Client.h \
	Lobby2Message.h \
	Lobby2Plugin.h \
	Lobby2Presence.h \
	Lobby2ResultCode.h \
	Lobby2Server.h \
	Rooms/IntervalTimer.h \
	Rooms/ProfanityFilter.h \
	Rooms/RoomsContainer.h \
	Rooms/RoomsErrorCodes.h \
	Rooms/RoomsPlugin.h \
	Rooms/RoomTypes.h
