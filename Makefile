SRC = $(wildcard src/*.cpp)
HDR = $(wildcard src/*.hpp)
OBJ = $(patsubst src/%.cpp, %.o, $(SRC))

all: jabol

%.o: src/%.cpp
	g++ -c -O2 $<

$(OBJ): $(HDR)

jabol: $(OBJ)
	g++ -o $@ $(OBJ) -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

run: all
	./jabol

clean:
	rm -f *.o jabol

.PHONY: all run clean
