CXX = g++
CXXFLAGS = -g -std=c++11

OBJECTS = student.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ course_section.cpp

clean:
	$(RM) *.o *.gch *.dSYM test/test core main
