#Makefile

# all: main

main: vc_isdigit.o vc_isalpha.o
	ar r libvc.a vc_isalpha.o vc_isdigit.o
	# gcc main.o vc_isalpha.o vc_isdigit.o -o main

main.o: main.c vc_isalpha.h vc_isdigit.h
	gcc -c main.c
vc_isalpha.o: vc_isalpha.c
	gcc -c vc_isalpha.c
vc_isdigit.o: vc_isdigit.c
	gcc -c vc_isdigit.c 

clean:
	rm -f *.o