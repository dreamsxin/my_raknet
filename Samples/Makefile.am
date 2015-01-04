SUBDIRS = Tests
#	AutopatcherClient AutopatcherClientRestarter AutopatcherServer \
#	AutoPatcherServer_MySQL \
#	CloudClient CloudServer CloudTest \
#	ComprehensivePCGame \
#	CrossConnectionTest DirectoryDeltaTransfer "Dropped Connection Test" \
#	Encryption FCMHost FCMHostSimultaneous FCMVerifiedJoinSimultaneous \
#	"Flow Control Test" "Fully Connected Mesh" \
#	LANServerDiscovery Lobby2Client MasterServer \
#	NATCompleteClient NATCompleteServer OfflineMessagesTest \
#	PacketLogger PHPDirectoryServer2 RackspaceConsole RakVoice \
#	RakVoiceFMOD "Reliable Ordered Test" Router2 \
#	RPC3 RPC4 StatisticsHistoryTest \
#	TestDLL TitleValidationDB_PostgreSQL

AM_CPPFLAGS = -iquote$(top_srcdir)/Source $(RN_CPPFLAGS)
AM_CXXFLAGS = $(RN_CXXFLAGS)

AM_LDFLAGS = -rpath $(libdir)

LDADD = \
	$(top_builddir)/Source/libRakNet.la

AUTOMAKE_OPTIONS = subdir-objects

#distributable programs
samplesdir = $(pkgdatadir)/Samples
samples_PROGRAMS =

#BigPacketTest
samples_PROGRAMS += BigPacketTestSample
BigPacketTestSample_SOURCES = \
	BigPacketTest/BigPacketTest.cpp

#BurstTest
samples_PROGRAMS += BurstTestSample
BurstTestSample_SOURCES = \
	BurstTest/BurstTest.cpp
	
#"Chat Example": ChatClient ChatServer
samples_PROGRAMS += ChatClientSample ChatServerSample
ChatClientSample_SOURCES = \
	Chat_Example/Chat_Example_Client.cpp
ChatServerSample_SOURCES = \
	Chat_Example/Chat_Example_Server.cpp

#CommandConsoleClient CommandConsoleServer
samples_PROGRAMS += CommandConsoleServerSample CommandConsoleClientSample
CommandConsoleClientSample_SOURCES = \
	CommandConsoleClient/main.cpp
CommandConsoleServerSample_SOURCES = \
	CommandConsoleServer/main.cpp

#ComprehensiveTest
samples_PROGRAMS += ComprehensiveTestSample
ComprehensiveTestSample_SOURCES = \
	ComprehensiveTest/ComprehensiveTest.cpp

#FileListTransfer
samples_PROGRAMS += FileListTransferSample
FileListTransferSample_SOURCES = \
	FileListTransfer/main.cpp

#MessageFilter
samples_PROGRAMS += MessageFilterSample
MessageFilterSample_SOURCES = \
	MessageFilter/MessageFilterTest.cpp

#MessageSizeTest
samples_PROGRAMS += MessageSizeTestSample
MessageSizeTestSample_SOURCES = \
	MessageSizeTest/MessageSizeTest.cpp

#Ping
samples_PROGRAMS += PingSample
PingSample_SOURCES = \
	Ping/Ping.cpp

#ReadyEvent
samples_PROGRAMS += ReadyEventSample
ReadyEventSample_SOURCES = \
	ReadyEvent/ReadyEventSample.cpp

#ReplicatedLogin
samples_PROGRAMS += ReplicatedLoginSample
ReplicatedLoginSample_SOURCES = \
	ReplicatedLogin/ReplicatedLogin.cpp

#ReplicaManager3
samples_PROGRAMS += ReplicaManager3Sample
ReplicaManager3Sample_SOURCES = \
	ReplicaManager3/main.cpp

#SendEmail
samples_PROGRAMS += SendEmailSample
SendEmailSample_SOURCES = \
	SendEmail/main.cpp

#ServerClientTest2
samples_PROGRAMS += ServerClientTest2Sample
ServerClientTest2Sample_SOURCES = \
	ServerClientTest2/ServerClientTest2.cpp

#TeamManager
samples_PROGRAMS += TeamManagerSample
TeamManagerSample_SOURCES = \
	TeamManager/TeamManagerTest.cpp

#ThreadTest
samples_PROGRAMS += ThreadTestSample
ThreadTestSample_SOURCES = \
	ThreadTest/ThreadTest.cpp

#Timestamping
samples_PROGRAMS += TimestampingSample
TimestampingSample_SOURCES = \
	Timestamping/Timestamping.cpp

#TwoWayAuthentication
samples_PROGRAMS += TwoWayAuthenticationSample
TwoWayAuthenticationSample_SOURCES = \
	TwoWayAuthentication/TwoWayAuthenticationTest.cpp

#UDPForwarder
#samples_PROGRAMS += UDPForwarderSample
#UDPForwarderSample_SOURCES = \
#	UDPForwarder/main.cpp
