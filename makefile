all: app1

app1: main.o read_csv.o show_menu.o funciones.o
	gcc main.o read_csv.o show_menu.o funciones.o -o app1

main.o: main.c header.h
	gcc -c main.c

read_csv.o: read_csv.c header.h
	gcc -c read_csv.c 

funciones.o: funciones.c header.h
	gcc -c funciones.c

show_menu.o: show_menu.c header.h
	gcc -c show_menu.c

clear:
	rm -f app1 *.o 