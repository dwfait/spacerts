CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))
LD_FLAGS :=  -lstdc++ -lsfml-system.2 -lsfml-window.2 -lsfml-graphics.2 -stdlib=libc++
CC_FLAGS := -Wall -Wextra -pedantic -std=c++11 -stdlib=libc++ -I/usr/include/nvidia-current

bin/spacerts: $(OBJ_FILES)
	mkdir -p bin/
	clang++ -o $@ $^ $(LD_FLAGS)

obj/%.o: src/%.cpp
	mkdir -p obj/
	clang++ $(CC_FLAGS) -c -o $@ $<

clean:
	rm -f obj/*.o bin/*
