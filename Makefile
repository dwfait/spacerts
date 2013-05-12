CPP_FILES := $(wildcard src/*.cpp)
TEST_CPP_FILES := $(wildcard test/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))
TEST_OBJ_FILES := $(addprefix test_obj/,$(notdir $(TEST_CPP_FILES:.cpp=.o)))
LD_FLAGS :=  -lstdc++ -lsfml-system.2 -lsfml-window.2 -lsfml-graphics.2 -stdlib=libc++
CC_FLAGS := -Wall -Wextra -pedantic -std=c++11 -stdlib=libc++ -I/usr/include/nvidia-current

all: bin/spacerts bin/test

test: bin/test
		bin/test

bin/spacerts: $(OBJ_FILES)
	mkdir -p bin/
	clang++ -o $@ $^ $(LD_FLAGS)

bin/test: $(TEST_OBJ_FILES)
	clang++ -o $@ $^ $(LD_FLAGS)

obj/%.o: src/%.cpp
	mkdir -p obj/
	clang++ $(CC_FLAGS) -c -o $@ $<

test_obj/%.o: test/%.cpp
	mkdir -p test_obj/
	clang++ $(CC_FLAGS) -c -o $@ $<

clean:
	rm -f obj/*.o bin/* test_obj/*.o
