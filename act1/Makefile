all: fibgcd

fibgcd: main.o fib.o gcd.o
	gcc main.o fib.o gcd.o -o fibgcd

main.o: main.c
	gcc -c main.c -o main.o

fibN.o: fibN.c
	gcc -c fib.c -o fib.o

gcd.o: gcd.c
	gcc -c gcd.c -o gcd.o

clean:
	rm -f fibgcd *.o *~
