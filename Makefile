#CXX=clang++
CXX=g++

CXXFLAGS= -O3 -Wall

BINARIES=dataProj testDemog1 testDemog2

all: ${BINARIES}

tests: ${BINARIES}
	./testDemog1
	./testDemog2

dataProj: demogData.o parse.o main.o
	${CXX} $^ -o $@

testDemog1: testDemog1.o demogData.o tddFuncs.o
	${CXX} $^ -o $@

testDemog2: testDemog2.o demogData.o tddFuncs.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o 
