ofiles = main.o Soldiers.o Boatman.o SoldierFactory.o BoatmanFactory.o
gpp_o = g++ -c -std=c++11

main: $(ofiles)
	g++ -std=c++11 $(ofiles) -o main

main.o: main.cpp Soldiers.h Boatman.h SoldierFactory.h BoatmanFactory.h
	$(gpp_o) main.cpp

Soldiers.o: Soldiers.h Soldiers.cpp
	$(gpp_o) Soldiers.cpp

Boatman.o: Boatman.h Boatman.cpp Soldiers.h
	$(gpp_o) Boatman.cpp

SoldierFactory.o: SoldierFactory.h SoldierFactory.cpp 
	$(gpp_o) SoldierFactory.cpp

BoatmanFactory.o: BoatmanFactory.h BoatmanFactory.cpp Boatman.h
	$(gpp_o) BoatmanFactory.cpp

r: main
	./main

v:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./main

c:
	rm -f *.o main

g: main.cpp node.cpp
	g++ --coverage main.cpp node.cpp -o main
