jabol: main.o
	g++ build/main.o -o build/jabol -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

main.o: main.cpp
	cd build
	g++ -c main.cpp
	mv main.o ./build

clean:
	rm *.o build/jabol
