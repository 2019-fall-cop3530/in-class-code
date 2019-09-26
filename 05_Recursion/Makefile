# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS  = -g -Wall -std=c++11

SRC_FILES := $(shell find . -path ./test -prune -o -name "*.cpp" -print)
OBJECTS = binary_search.o

# the build target executable:
TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET) *.o

testBuild: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -Itest/catch -o test/test $(OBJECTS) test/test.cpp

test: testBuild
	test/test --success
