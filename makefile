CC := g++
CFLAGS := -c
SRC_DIR := src
BUILD_DIR := build
TARGET := main

# Liste des fichiers source
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
# Liste des fichiers objets correspondants
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $@

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(SRC_DIR)/%.hpp
	$(CC) $(CFLAGS) $< -o $@

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean




