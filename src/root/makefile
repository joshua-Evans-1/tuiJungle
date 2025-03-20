# specifies the c++ compiler to be used
CXX = g++

# sets flags to be used with the compiler
# -g debugging info
# -Wall enables Warnings
CXXFLAGS = -g -Wall

# directories
LIB_DIR = ../lib
BUILD_DIR = ../build
TEST_DIR = ../tests

# Files
SRC_FILES = main.cpp $(lib_dir)/song.cpp
OBJ_FILES = $(SRC_FILES:%.cpp=$(BUILD_DIR)/%.o)
TEST_FILES = $(TEST_DIR)/test.cpp $(TEST_DIR)/album.test.cpp $(TEST_DIR)/song.test.cpp $(LIB_DIR)/song.cpp $(LIB_DIR)/album.cpp
EXEC = $(BUILD_DIR)/executable

# set targets
all: $(EXEC)

# if build director doesnt exist make it 
# for use after Clean
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# compile files to executable
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(EXEC): $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) -o $@


test:
	$(CXX) $(TEST_FILES) -o $(BUILD_DIR)/tests 
	$(BUILD_DIR)/tests

clean: 
	rm -rf $(BUILD_DIR)





