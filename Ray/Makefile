OBJ = main.o
INC = -I "./"

Ray: $(OBJ)
	g++ $(OBJ) -o Ray
	rm -f $(OBJ)

main.o:
	g++ -c main.cpp $(INC)

clean:
	rm -f $(OBJ) Ray
