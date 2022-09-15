all: p1 p2 p3 p4 p5 p6

p1: p1.o
	gcc p1.o -o p1
p2: p2.o
	gcc p2.o -o p2
p3: p3.o
	gcc p3.o -o p3
p4: p4.o
	gcc p4.o -o p4
p5: p5.o
	gcc p5.o -o p5
p6: p6.o
	gcc p6.o -o p6
p1.o: p1.c
	gcc -c p1.c -o p1.o
p2.o: p2.c
	gcc -c p2.c -o p2.o
p3.o: p3.c
	gcc -c p3.c -o p3.o
p4.o: p4.c
	gcc -c p4.c -o p4.o
p5.o: p5.c
	gcc -c p5.c -o p5.o
p6.o: p6.c
	gcc -c p6.c -o p6.o
clean:
	rm -f p1 p2 p3 p4 p5 p6 *.o
