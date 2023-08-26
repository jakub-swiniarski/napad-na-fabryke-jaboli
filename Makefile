jabol: main.o FPSCounter.o
	g++ build/main.o build/FPSCounter.o -o build/jabol -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
	cp -R assets/ build/

main.o: main.cpp
	g++ -c main.cpp
	mv main.o ./build

FPSCounter.o: src/FPSCounter.cpp headers/FPSCounter.hpp
	g++ -c src/FPSCounter.cpp
	mv FPSCounter.o ./build

clean:
	rm build/*.o build/jabol
	rm -r build/assets
