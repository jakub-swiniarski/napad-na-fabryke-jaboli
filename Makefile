jabol: main.o FPSCounter.o Player.o Entity.o BG.o RoomNorbi.o Bed.o Wardrobe.o TV.o path.o Table.o
	g++ build/main.o build/FPSCounter.o build/Player.o build/Entity.o build/BG.o build/RoomNorbi.o build/Bed.o build/Wardrobe.o build/TV.o build/path.o build/Table.o -o build/jabol -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

main.o: main.cpp
	g++ -c main.cpp
	mv main.o ./build

FPSCounter.o: src/FPSCounter.cpp headers/FPSCounter.hpp
	g++ -c src/FPSCounter.cpp
	mv FPSCounter.o ./build

Player.o: src/Player.cpp headers/Player.hpp
	g++ -c src/Player.cpp
	mv Player.o ./build

Entity.o: src/Entity.cpp headers/Entity.hpp
	g++ -c src/Entity.cpp
	mv Entity.o ./build

BG.o: src/BG.cpp headers/BG.hpp
	g++ -c src/BG.cpp
	mv BG.o ./build

RoomNorbi.o: src/RoomNorbi.cpp headers/RoomNorbi.hpp
	g++ -c src/RoomNorbi.cpp
	mv RoomNorbi.o ./build

Bed.o: src/Bed.cpp headers/Bed.hpp
	g++ -c src/Bed.cpp
	mv Bed.o ./build

Wardrobe.o: src/Wardrobe.cpp headers/Wardrobe.hpp
	g++ -c src/Wardrobe.cpp
	mv Wardrobe.o ./build

TV.o: src/TV.cpp headers/TV.hpp
	g++ -c src/TV.cpp
	mv TV.o ./build

path.o: src/path.cpp headers/path.hpp
	g++ -c src/path.cpp
	mv path.o ./build

Table.o: src/Table.cpp headers/Table.hpp
	g++ -c src/Table.cpp
	mv Table.o ./build

.PHONY: clean run

clean:
	rm build/*.o build/jabol

run: jabol
	./build/jabol
