jabol: main.o fpsCounter.o
	g++ build/main.o build/fpsCounter.o -o build/jabol -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

main.o: main.cpp
	g++ -c main.cpp
	mv main.o ./build

fpsCounter.o: src/fpsCounter.cpp headers/fpsCounter.hpp
	g++ -c src/fpsCounter.cpp
	mv fpsCounter.o ./build

clean:
	rm build/*.o build/jabol
