jabol: main.o FPSCounter.o Player.o Entity.o
	g++ build/main.o build/FPSCounter.o build/Player.o build/Entity.o -o build/jabol -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

prod: main.o FPSCounter.o Player.o Entity.o
	g++ build/main.o build/FPSCounter.o build/Player.o build/Entity.o -o build/jabol -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
	rm build/main.o build/FPSCounter.o build/Player.o build/Entity.o

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

clean:
	rm build/*.o build/jabol
