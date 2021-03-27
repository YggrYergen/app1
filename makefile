all: app1

app1: main.o csv_read.o
	gcc main.c csv_read.c -o app1

main.o: main.c header.h
	gcc -c main.c

read_csv.o: csv_read.c header.h
	gcc -c csv_read.c 

clear:
	rm -f app1 *.o