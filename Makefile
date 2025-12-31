CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
SRC_DIR = src
BIN_DIR = bin

# Recursively find all .c files in SRC_DIR
SOURCES := $(shell find $(SRC_DIR) -type f -name '*.c')
# Map src/path/file.c → bin/path/file
TARGETS := $(SOURCES:$(SRC_DIR)/%.c=$(BIN_DIR)/%)

.PHONY: all clean

all: $(TARGETS)

# Build any bin/path/file from src/path/file.c
$(BIN_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(BIN_DIR)