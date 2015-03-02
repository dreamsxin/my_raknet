SUBDIRS = Tests
#	AutopatcherClient AutopatcherClientRestarter AutopatcherServer \
#	AutoPatcherServer_MySQL \
#	MasterServer \
#	PHPDirectoryServer2 \
#	RakVoice RakVoiceFMOD \
#	TitleValidationDB_PostgreSQL

AM_CPPFLAGS = -iquote$(top_srcdir)/Source -I$(top_srcdir)/DependentExtensions \
	$(RN_CPPFLAGS)
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

#CloudClient CloudServer CloudTest
samples_PROGRAMS += CloudClientSample CloudServerSample CloudTestSample
CloudClientSample_SOURCES = \
	CloudClient/CloudClientSample.cpp

CloudServerSample_SOURCES = \
	CloudServer/CloudServerSample.cpp \
	CloudServer/CloudServerHelper.h \
	CloudServer/CloudServerHelper.cpp

CloudTestSample_SOURCES = \
	CloudTest/CloudTest.cpp

#CommandConsoleClient CommandConsoleServer
samples_PROGRAMS += CommandConsoleServerSample CommandConsoleClientSample
CommandConsoleClientSample_SOURCES = \
	CommandConsoleClient/main.cpp

CommandConsoleServerSample_SOURCES = \
	CommandConsoleServer/main.cpp

#ComprehensivePCGame SOURCE_CORRECTED
samples_PROGRAMS += ComprehensivePCGameSample
ComprehensivePCGameSample_CPPFLAGS = $(AM_CPPFLAGS) \
	-iquote$(top_srcdir)/DependentExtensions/miniupnpc-1.6.20120410 \
	-I$(top_srcdir)/DependentExtensions/jansson-2.4/src
ComprehensivePCGameSample_LDADD = $(LDADD) \
	$(top_builddir)/DependentExtensions/jansson-2.4/src/libjansson.a \
	$(top_builddir)/DependentExtensions/miniupnpc-1.6.20120410/libminiupnpc.a
ComprehensivePCGameSample_SOURCES = \
	ComprehensivePCGame_CORRECTED/ComprehensivePCGame.cpp

#ComprehensiveTest
samples_PROGRAMS += ComprehensiveTestSample
ComprehensiveTestSample_SOURCES = \
	ComprehensiveTest/ComprehensiveTest.cpp

#CrossConnectionTest
samples_PROGRAMS += CrossConnectionTestSample
CrossConnectionTestSample_SOURCES = \
	CrossConnectionTest/CrossConnectionTest.cpp

#DirectoryDeltaTransfer
samples_PROGRAMS += DirectoryDeltaTransferSample
DirectoryDeltaTransferSample_SOURCES = \
	DirectoryDeltaTransfer/DirectoryDeltaTransferTest.cpp

#"Dropped Connection Test" SOURCE_CORRECTED
samples_PROGRAMS += DroppedConnectionTestSample
DroppedConnectionTestSample_SOURCES = \
	Dropped_Connection_Test_CORRECTED/DroppedConnectionTest.cpp

if RN_LIBCATSECURITY
#Encryption
samples_PROGRAMS += EncryptionSample
EncryptionSample_SOURCES = \
	Encryption/Encryption.cpp
endif

#FCMHost SOURCE_CORRECTED
samples_PROGRAMS += FCMHostSample
FCMHostSample_SOURCES = \
	FCMHost_CORRECTED/FCM2HostTest.cpp

#FCMHostSimultaneous
samples_PROGRAMS += FCMHostSimultaneousSample
FCMHostSimultaneousSample_SOURCES = \
	FCMHostSimultaneous/FCM2HostSimultaneousTest.cpp

#FCMVerifiedJoinSimultaneous
samples_PROGRAMS += FCMVerifiedJoinSimultaneousSample
FCMVerifiedJoinSimultaneousSample_SOURCES = \
	FCMVerifiedJoinSimultaneous/FCM2VerifiedJoinSimultaneousTest.cpp

#FileListTransfer
samples_PROGRAMS += FileListTransferSample
FileListTransferSample_SOURCES = \
	FileListTransfer/main.cpp

#"Flow Control Test"
samples_PROGRAMS += FlowControlTestSample
FlowControlTestSample_SOURCES = \
	Flow_Control_Test/FlowControlTest.cpp

#"Fully Connected Mesh"
samples_PROGRAMS += FullyConnectedMeshSample
FullyConnectedMeshSample_SOURCES = \
	Fully_Connected_Mesh/FCMTest.cpp

#LANServerDiscovery
samples_PROGRAMS += LANServerDiscoverySample
LANServerDiscoverySample_SOURCES = \
	LANServerDiscovery/LANServerDiscovery.cpp

#Lobby2Client
samples_PROGRAMS += Lobby2ClientSample
Lobby2ClientSample_CPPFLAGS = $(AM_CPPFLAGS) \
	-iquote$(top_srcdir)/DependentExtensions/Lobby2 \
	-iquote$(top_srcdir)/DependentExtensions/Lobby2/Rooms
Lobby2ClientSample_LDADD = $(LDADD) \
	$(top_builddir)/DependentExtensions/Lobby2/liblobby2.a
Lobby2ClientSample_SOURCES = \
	Lobby2Client/Lobby2ClientSample.cpp

#MessageFilter
samples_PROGRAMS += MessageFilterSample
MessageFilterSample_SOURCES = \
	MessageFilter/MessageFilterTest.cpp

#MessageSizeTest
samples_PROGRAMS += MessageSizeTestSample
MessageSizeTestSample_SOURCES = \
	MessageSizeTest/MessageSizeTest.cpp

#NATCompleteClient NATCompleteServer
samples_PROGRAMS += NATCompleteClientSample NATCompleteServerSample
NATCompleteClientSample_CPPFLAGS = $(AM_CPPFLAGS) \
	-iquote$(top_srcdir)/DependentExtensions/miniupnpc-1.6.20120410
NATCompleteClientSample_LDADD = $(LDADD) \
	$(top_builddir)/DependentExtensions/miniupnpc-1.6.20120410/libminiupnpc.a
NATCompleteClientSample_SOURCES = \
	NATCompleteClient/main.cpp

NATCompleteServerSample_CPPFLAGS = $(AM_CPPFLAGS) \
	-iquote$(top_srcdir)/DependentExtensions/miniupnpc-1.6.20120410 \
	-iquote$(top_srcdir)/Samples/CloudServer
NATCompleteServerSample_LDADD = $(LDADD) \
	$(top_builddir)/DependentExtensions/miniupnpc-1.6.20120410/libminiupnpc.a
NATCompleteServerSample_SOURCES = \
	NATCompleteServer/main.cpp \
	CloudServer/CloudServerHelper.cpp

#OfflineMessagesTest
samples_PROGRAMS += OfflineMessagesTestSample
OfflineMessagesTestSample_SOURCES = \
	OfflineMessagesTest/OfflineMessagesTest.cpp

#PacketLogger
samples_PROGRAMS += PacketLoggerSample
PacketLoggerSample_SOURCES = \
	PacketLogger/PacketLoggerTest.cpp

#Ping
samples_PROGRAMS += PingSample
PingSample_SOURCES = \
	Ping/Ping.cpp

#RackspaceConsole SOURCE_CORRECTED
samples_PROGRAMS += RackspaceConsoleSample
RackspaceConsoleSample_SOURCES = \
	RackspaceConsole_CORRECTED/main.cpp

#ReadyEvent
samples_PROGRAMS += ReadyEventSample
ReadyEventSample_SOURCES = \
	ReadyEvent/ReadyEventSample.cpp

#"Reliable Ordered Test"
samples_PROGRAMS += ReliableOrderedTestSample
ReliableOrderedTestSample_SOURCES = \
	Reliable_Ordered_Test/ReliableOrderedTest.cpp

#ReplicatedLogin
samples_PROGRAMS += ReplicatedLoginSample
ReplicatedLoginSample_SOURCES = \
	ReplicatedLogin/ReplicatedLogin.cpp

#ReplicaManager3
samples_PROGRAMS += ReplicaManager3Sample
ReplicaManager3Sample_SOURCES = \
	ReplicaManager3/main.cpp

if HAVE_BOOST
#RPC3
samples_PROGRAMS += RPC3Sample
RPC3Sample_CPPFLAGS = $(AM_CPPFLAGS) \
	-iquote$(top_srcdir)/DependentExtensions/RPC3
RPC3Sample_LDADD = $(LDADD) \
	$(top_builddir)/DependentExtensions/RPC3/librpc3.a
RPC3Sample_SOURCES = \
	RPC3/RPC3Sample.cpp
endif

#RPC4
samples_PROGRAMS += RPC4Sample
RPC4Sample_SOURCES = \
	RPC4/RPC4Sample.cpp

#Router2
samples_PROGRAMS += Router2Sample
Router2Sample_SOURCES = \
	Router2/Router2Sample.cpp

#SendEmail
samples_PROGRAMS += SendEmailSample
SendEmailSample_SOURCES = \
	SendEmail/main.cpp

#ServerClientTest2
samples_PROGRAMS += ServerClientTest2Sample
ServerClientTest2Sample_SOURCES = \
	ServerClientTest2/ServerClientTest2.cpp

#StatisticsHistoryTest
samples_PROGRAMS += StatisticsHistoryTestSample
StatisticsHistoryTestSample_SOURCES = \
	StatisticsHistoryTest/StatisticsHistoryTest.cpp

#TeamManager
samples_PROGRAMS += TeamManagerSample
TeamManagerSample_SOURCES = \
	TeamManager/TeamManagerTest.cpp

#TestDLL
samples_PROGRAMS += TestDLLSample
TestDLLSample_SOURCES = \
	TestDLL/main.cpp

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
