#this Makefile.am is derived from revision 485 of http://libcatid.googlecode.com/svn/trunk
AM_CPPFLAGS = $(RN_CPPFLAGS) -I$(top_srcdir)/DependentExtensions
AM_CXXFLAGS = $(RN_CXXFLAGS)
AM_LDFLAGS = 

#libcat.a: static library
noinst_LIBRARIES = libcat.a

libcat_a_SOURCES = \
	src/codec/RangeCoder.cpp \
	src/crypt/cookie/CookieJar.cpp \
	src/crypt/hash/HMAC_MD5.cpp \
	src/crypt/hash/Skein256.cpp \
	src/crypt/hash/Skein512.cpp \
	src/crypt/hash/Skein.cpp \
	src/crypt/privatekey/ChaCha.cpp \
	src/crypt/rand/EntropyGeneric.cpp \
	src/crypt/rand/EntropyLinux.cpp \
	src/crypt/rand/EntropyWindowsCE.cpp \
	src/crypt/rand/EntropyWindows.cpp \
	src/crypt/rand/Fortuna.cpp \
	src/crypt/SecureCompare.cpp \
	src/crypt/tunnel/AuthenticatedEncryption.cpp \
	src/crypt/tunnel/EasyHandshake.cpp \
	src/crypt/tunnel/KeyAgreement.cpp \
	src/crypt/tunnel/KeyAgreementInitiator.cpp \
	src/crypt/tunnel/KeyAgreementResponder.cpp \
	src/crypt/tunnel/KeyMaker.cpp \
	src/hash/MurmurHash2.cpp \
	src/lang/Strings.cpp \
	src/math/BigMontgomery.cpp \
	src/math/BigPseudoMersenne.cpp \
	src/math/BigRTL.cpp \
	src/math/BigTwistedEdwards.cpp \
	src/port/AlignedAlloc.cpp \
	src/port/EndianNeutral.cpp \
	src/rand/MersenneTwister.cpp \
	src/rand/StdRand.cpp \
	src/threads/Mutex.cpp \
	src/threads/RWLock.cpp \
	src/threads/Thread.cpp \
	src/threads/WaitableFlag.cpp \
	src/time/Clock.cpp

##!!!THESE are included as extra dist because are used as headers
EXTRA_DIST = \
	src/math/edward/addsub/PtAdd.cpp \
	src/math/edward/addsub/PtDouble.cpp \
	src/math/edward/addsub/PtDoubleZ1.cpp \
	src/math/edward/addsub/PtNegate.cpp \
	src/math/edward/addsub/PtSubtract.cpp \
	src/math/edward/io/PtFillRandomX.cpp \
	src/math/edward/io/PtGenerate.cpp \
	src/math/edward/io/PtNormalize.cpp \
	src/math/edward/io/PtSolveAffineY.cpp \
	src/math/edward/io/PtValidAffine.cpp \
	src/math/edward/io/SaveAffineX.cpp \
	src/math/edward/io/SaveAffineXY.cpp \
	src/math/edward/mul/PtMultiply.cpp \
	src/math/edward/mul/PtMultiplyPrecomp.cpp \
	src/math/edward/mul/PtPrecompAddSub.cpp \
	src/math/edward/mul/RefMul.cpp \
	src/math/mersenne/addsub/MrAdd.cpp \
	src/math/mersenne/addsub/MrNegate.cpp \
	src/math/mersenne/addsub/MrSubtract.cpp \
	src/math/mersenne/expm/MrInvert.cpp \
	src/math/mersenne/expm/MrSquareRoot.cpp \
	src/math/mersenne/mul/MrMultiply.cpp \
	src/math/mersenne/mul/MrMultiplyX.cpp \
	src/math/mersenne/mul/MrSquare.cpp \
	src/math/mersenne/reduce/MrReduce.cpp \
	src/math/mersenne/reduce/MrReduceProduct.cpp \
	src/math/montgomery/addsub/MonAdd.cpp \
	src/math/montgomery/addsub/MonNegate.cpp \
	src/math/montgomery/addsub/MonSubtract.cpp \
	src/math/montgomery/expm/IsRabinMillerPrime.cpp \
	src/math/montgomery/expm/MonExpMod.cpp \
	src/math/montgomery/mul/MonMultiply.cpp \
	src/math/montgomery/mul/MonSquare.cpp \
	src/math/montgomery/reduce/MonInput.cpp \
	src/math/montgomery/reduce/MonOutput.cpp \
	src/math/montgomery/reduce/MonReduceProduct.cpp	\
	src/math/rtl/addsub/Add1.cpp \
	src/math/rtl/addsub/Add.cpp \
	src/math/rtl/addsub/AddX.cpp \
	src/math/rtl/addsub/Compare.cpp \
	src/math/rtl/addsub/DoubleAdd.cpp \
	src/math/rtl/addsub/Double.cpp \
	src/math/rtl/addsub/Negate.cpp \
	src/math/rtl/addsub/Shift.cpp \
	src/math/rtl/addsub/Subtract.cpp \
	src/math/rtl/addsub/SubtractX.cpp \
	src/math/rtl/div/DivideAsm64.cpp \
	src/math/rtl/div/Divide.cpp \
	src/math/rtl/div/DivideGeneric.cpp \
	src/math/rtl/div/EatTrailingZeroes.cpp \
	src/math/rtl/div/ModularInverse.cpp \
	src/math/rtl/div/MulMod.cpp \
	src/math/rtl/div/MultiplicativeInverse.cpp \
	src/math/rtl/io/Load.cpp \
	src/math/rtl/io/LoadString.cpp \
	src/math/rtl/io/Save.cpp \
	src/math/rtl/mul/Multiply.cpp \
	src/math/rtl/mul/MultiplyXAdd.cpp \
	src/math/rtl/mul/MultiplyX.cpp \
	src/math/rtl/mul/Square.cpp \
	src/math/rtl/mul/CombaMul.cpp \
	src/crypt/pass/Passwords.cpp
###!!!

noinst_HEADERS = \
	AllCommon.hpp \
	AllCrypt.hpp \
	AllMath.hpp \
	AllTunnel.hpp \
	asm/big_x64_asm.hpp \
	codec/RangeCoder.hpp \
	Config.hpp \
	crypt/cookie/CookieJar.hpp \
	crypt/hash/HMAC_MD5.hpp \
	crypt/hash/ICryptHash.hpp \
	crypt/hash/Skein.hpp \
	crypt/pass/Passwords.hpp \
	crypt/rand/Fortuna.hpp \
	crypt/SecureCompare.hpp \
	crypt/symmetric/ChaCha.hpp \
	crypt/tunnel/AuthenticatedEncryption.hpp \
	crypt/tunnel/EasyHandshake.hpp \
	crypt/tunnel/KeyAgreement.hpp \
	crypt/tunnel/KeyAgreementInitiator.hpp \
	crypt/tunnel/KeyAgreementResponder.hpp \
	crypt/tunnel/KeyMaker.hpp \
	hash/MurmurHash2.hpp \
	lang/Strings.hpp \
	math/BigMontgomery.hpp \
	math/BigPseudoMersenne.hpp \
	math/BigRTL.hpp \
	math/BigTwistedEdwards.hpp \
	math/BitMath.hpp \
	math/Legs.hpp \
	Platform.hpp \
	port/AlignedAlloc.hpp \
	port/EndianNeutral.hpp \
	rand/IRandom.hpp \
	rand/MersenneTwister.hpp \
	rand/StdRand.hpp \
	Singleton.hpp \
	threads/Atomic.hpp \
	threads/Mutex.hpp \
	threads/RWLock.hpp \
	threads/Thread.hpp \
	threads/WaitableFlag.hpp \
	time/Clock.hpp
