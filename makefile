# Compiler
CXX = g++

# Directories
INCLUDE_DIR = Include
SRC_DIR = Src

# Files
HEADERS = $(wildcard $(INCLUDE_DIR)/*.h)
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = main

# Compilation flags
CXXFLAGS = -I$(INCLUDE_DIR) -Wall -g

# Linker flags
LDFLAGS =

# Targets
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_DIR)/*.o $(EXECUTABLE)

.PHONY: all clean
