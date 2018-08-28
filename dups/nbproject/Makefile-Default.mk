#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Default
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Dups.o \
	${OBJECTDIR}/MainForm.o \
	${OBJECTDIR}/PathList.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L../poco/lib/Linux/x86_64 -L../nanogui -lnanogui -lX11 -ldl -lGL -lXxf86vm -lXrandr -lXinerama -lXcursor -lXi -lPocoUtil -lPocoJSON -lPocoXML -lPocoEncodings -lPocoFoundation -lpthread

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_PLATFORM}/dups

${CND_PLATFORM}/dups: ${OBJECTFILES}
	${MKDIR} -p ${CND_PLATFORM}
	${LINK.cc} -o ${CND_PLATFORM}/dups ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Dups.o: Dups.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../nanogui/ext/eigen -I../nanogui/include -I../nanogui/ext/glfw/include -I../nanogui/ext/nanovg/src -I../poco/Foundation/include -I../poco/Util/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Dups.o Dups.cpp

${OBJECTDIR}/MainForm.o: MainForm.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../nanogui/ext/eigen -I../nanogui/include -I../nanogui/ext/glfw/include -I../nanogui/ext/nanovg/src -I../poco/Foundation/include -I../poco/Util/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MainForm.o MainForm.cpp

${OBJECTDIR}/PathList.o: PathList.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../nanogui/ext/eigen -I../nanogui/include -I../nanogui/ext/glfw/include -I../nanogui/ext/nanovg/src -I../poco/Foundation/include -I../poco/Util/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PathList.o PathList.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../nanogui/ext/eigen -I../nanogui/include -I../nanogui/ext/glfw/include -I../nanogui/ext/nanovg/src -I../poco/Foundation/include -I../poco/Util/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
