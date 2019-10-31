CXX = g++
CXXFLAGS = -g -std=c++11

SRCS = $(wildcard *.cpp)
OBJECTS = $(SRCS: .cpp=.o) # file1.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) *.o *.gch *.dSYM test/test core main
