# Makefile for the main
myBST: main.o menu.o cases.o casesFunctions.o BStree.o populateTree.o printTree.o balanceTree.o
	gcc -o myBST main.o menu.o cases.o casesFunctions.o BStree.o populateTree.o printTree.o balanceTree.o
main.o: menu.c cases.c headers.h
	gcc -c main.c
menu.o: headers.h
	gcc -c menu.c
cases.o: casesFunctions.c headers.h
	gcc -c cases.c
casesFunctions.o: BStree.c populateTree.c printTree.c balanceTree.c headers.h BStree.h
	gcc -c casesFunctions.c
BStree.o: BStree.h
	gcc -c BStree.c
populateTree.o: BStree.h 
	gcc -c populateTree.c
printTree.o: BStree.h 
	gcc -c printTree.c
balanceTree.o: balanceTree.c BStree.h
	gcc -c balanceTree.c
clean:
	rm -f main *.o core myBST
