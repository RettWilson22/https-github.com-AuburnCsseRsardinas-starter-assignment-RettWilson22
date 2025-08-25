CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

SRC = starter.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = a.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp starter.h
	$(CXX) $(CXXFLAGS) -c $<

run: all
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
