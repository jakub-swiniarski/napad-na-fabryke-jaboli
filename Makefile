SRC = $(wildcard src/*.cpp)
HDR = $(wildcard src/*.hpp)
OBJ = $(patsubst src/%.cpp, %.o, $(SRC))

jabol: $(OBJ)
	g++ -o $@ $(OBJ) -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

$(OBJ): $(SRC) $(HDR)
	g++ -c $(SRC) -O2

.PHONY: clean run install uninstall

clean:
	rm *.o jabol

run: jabol
	./jabol
