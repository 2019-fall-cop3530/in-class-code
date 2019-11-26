CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -ftest-coverage -fprofile-arcs

SRCS = $(wildcard *.cpp)
OBJECTS = $(SRCS: .cpp=.o) # file1.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) *.o *.gc* *.dSYM test/test core main

testBuild: $(OBJECTS) test/test.o
	$(CXX) $(CXXFLAGS) -o test/test $^

test: testBuild
	$(RM) *.gcda *.gcov test/*.gcda test/*.gcov
	test/test --success
