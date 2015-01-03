SUBDIRS = Tests
#	AutopatcherClient AutopatcherClientRestarter AutopatcherServer \
#	AutoPatcherServer_MySQL BigPacketTest BurstTest "Chat Example" \
#	CloudClient CloudServer CloudTest \
#	ComprehensivePCGame \
#	CrossConnectionTest DirectoryDeltaTransfer "Dropped Connection Test" \
#	Encryption FCMHost FCMHostSimultaneous FCMVerifiedJoinSimultaneous \
#	"Flow Control Test" "Fully Connected Mesh" \
#	LANServerDiscovery Lobby2Client MasterServer \
#	NATCompleteClient NATCompleteServer OfflineMessagesTest \
#	PacketLogger PHPDirectoryServer2 RackspaceConsole RakVoice \
#	RakVoiceFMOD "Reliable Ordered Test" ReplicaManager3 Router2 \
#	RPC3 RPC4 SendEmail ServerClientTest2 StatisticsHistoryTest TeamManager \
#	TestDLL ThreadTest Timestamping TitleValidationDB_PostgreSQL \
#	TwoWayAuthentication UDPForwarder

AM_CPPFLAGS = -iquote$(top_srcdir)/Source $(RN_CPPFLAGS)
AM_CXXFLAGS = $(RN_CXXFLAGS)

AM_LDFLAGS = -rpath $(libdir)

LDADD = \
	$(top_builddir)/Source/libRakNet.la

AUTOMAKE_OPTIONS = subdir-objects

#distributable programs
samplesdir = $(pkgdatadir)/Samples
samples_PROGRAMS =

#Ping
samples_PROGRAMS += pingSample
pingSample_SOURCES = \
	Ping/Ping.cpp

#CommandConsoleServer & CommandConsoleClient
samples_PROGRAMS += commandConsoleServerSample commandConsoleClientSample
commandConsoleServerSample_SOURCES = \
	CommandConsoleServer/main.cpp

commandConsoleClientSample_SOURCES = \
	CommandConsoleClient/main.cpp

#ComprehensiveTest
samples_PROGRAMS += comprehensiveTestSample
comprehensiveTestSample_SOURCES = \
	ComprehensiveTest/ComprehensiveTest.cpp

#FileListTransfer
samples_PROGRAMS += fileListTransferSample
fileListTransferSample_SOURCES = \
	FileListTransfer/main.cpp

#MessageFilter
samples_PROGRAMS += messageFilterSample
messageFilterSample_SOURCES = \
	MessageFilter/MessageFilterTest.cpp

#MessageSizeTest
samples_PROGRAMS += messageSizeTestSample
messageSizeTestSample_SOURCES = \
	MessageSizeTest/MessageSizeTest.cpp

#ReadyEvent
samples_PROGRAMS += readyEventSample
readyEventSample_SOURCES = \
	ReadyEvent/ReadyEventSample.cpp


