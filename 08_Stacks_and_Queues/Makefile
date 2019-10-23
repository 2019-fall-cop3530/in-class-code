CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

OBJECTS = node.o queue.o # file1.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) *.o *.gc* *.dSYM test/test core main

testBuild: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -Itest/catch -o test/test $(OBJECTS) test/test.cpp

test: testBuild
	test/test --success
