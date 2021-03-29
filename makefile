all: app1

app1: main.o csv_read.o desplegar_menu.o 
	gcc main.o csv_read.o desplegar_menu.o -o app1

main.o: main.c header.h
	gcc -c main.c

read_csv.o: csv_read.c header.h
	gcc -c csv_read.c


desplegar_menu.o: desplegar_menu.c header.h
	gcc -c desplegar_menu.c

clear:
	rm -f app1 *.o