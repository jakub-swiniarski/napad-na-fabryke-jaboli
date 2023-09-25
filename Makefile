FLAGS=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
SOURCES=main.cpp src/path.cpp src/FPSCounter.cpp src/Player.cpp src/Entity.cpp src/BG.cpp src/RoomNorbi.cpp src/Bed.cpp src/Wardrobe.cpp src/TV.cpp src/Table.cpp
OBJECTS=main.o FPSCounter.o Player.o Entity.o BG.o RoomNorbi.o Bed.o Wardrobe.o TV.o path.o Table.o 

jabol: $(OBJECTS)
	g++ $(OBJECTS) -o jabol $(FLAGS)

$(OBJECTS): $(SOURCES)
	g++ -c $(SOURCES)

.PHONY: clean run

clean:
	rm *.o jabol

run: jabol
	./jabol
