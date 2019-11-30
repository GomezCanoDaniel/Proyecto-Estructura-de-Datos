a.out: main.o final.o
	gcc main.o final.o
main.o: main.c
	gcc -c main.c
final.o: final.c
	gcc -c final.c
run: a.out
	./a.out
clear:
	rm a.out main.o final.o 
