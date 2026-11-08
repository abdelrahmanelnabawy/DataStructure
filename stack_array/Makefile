CC       := gcc
CFLAGS   := -Wall -Wextra -std=c11 -I.

BUILD_DIR := build
SOURCES   := main.c stack/stack.c
OBJECTS   := $(SOURCES:%.c=$(BUILD_DIR)/%.o)
TARGET    := $(BUILD_DIR)/stack_array

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR)

-include $(OBJECTS:.o=.d)
