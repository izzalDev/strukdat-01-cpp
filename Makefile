# Compiler
CXX := g++

# Flags
CXXFLAGS := -Wall -Wextra -std=c++17 -O2

# Direktori
SRC_DIR := src
BUILD_DIR := bin

# Cari semua file .cpp di SRC_DIR dan buat daftar file .o di BUILD_DIR
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Nama program
TARGET := $(BUILD_DIR)/my_program

# Rule utama
all: $(TARGET)

# Compile binary
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile setiap file .cpp menjadi .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Buat folder build jika belum ada
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Bersihkan file .o dan binary
clean:
	rm -rf $(BUILD_DIR)

# Jalankan program
run: all
	./$(TARGET)

# Phony targets (tidak terkait file)
.PHONY: all clean run
