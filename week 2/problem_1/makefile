# Makefile for Payslip program

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable
TARGET = payslip

# Source files
SOURCES = payslip.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS)
$(CXX) $(OBJECTS) -o $(TARGET)

# Compile source files into object files
%.o: %.cpp
$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove generated files
clean:
rm -f $(OBJECTS) $(TARGET)

# Phony targets
.PHONY: all clean
