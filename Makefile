CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

BIN_DIR = bin
BUILD_DIR = build
INCLUDE_DIR = include
SRC_DIR = src

EXECUTABLE = $(BIN_DIR)/parking-ticket-simulator
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))
DEPENDENCIES = $(OBJECTS:.o=.d)

.PHONY: all clean run buildrun

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -MMD -MP -c $< -o $@

-include $(DEPENDENCIES)

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

buildrun: all run

.PHONY: all clean run buildrun
