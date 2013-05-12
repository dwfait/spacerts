SOURCE := $(wildcard src/*.cpp)
OBJECTS := $(addprefix obj/,$(notdir $(SOURCE:.cpp=.o)))

TEST_SOURCE := $(wildcard test/*.cpp)
TEST_OBJECTS := $(addprefix test_obj/,$(notdir $(TEST_SOURCE:.cpp=.o)))

LINK_FLAGS :=  -lstdc++ -lsfml-system.2 -lsfml-window.2 -lsfml-graphics.2 -stdlib=libc++
COMPILE_FLAGS := -Wall -Wextra -pedantic -std=c++11 -stdlib=libc++ -I/usr/include/nvidia-current

TARGET := bin/spacerts
TEST_TARGET := bin/test

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p bin/
	clang++ -o $@ $^ $(LINK_FLAGS)

test: $(TEST_TARGET)
	@$(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJECTS) $(filter-out obj/main.o, $(OBJECTS))
	@mkdir -p bin/
	clang++ -o $@ $^ $(LINK_FLAGS)


obj/%.o: src/%.cpp
	@mkdir -p obj/
	clang++ $(COMPILE_FLAGS) -c -o $@ $<

test_obj/%.o: test/%.cpp
	@mkdir -p test_obj/
	clang++ $(COMPILE_FLAGS) -c -o $@ $<

run: $(TARGET)
	@$(TARGET)

clean:
	@rm -f obj/*.o bin/* test_obj/*.o
