#ifndef FUNCIONES
#define FUNCIONES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 1024
#define p printf
#define s scanf

typedef struct sedes {
  char sede[50];
  char edificio[5];
  char piso[5];

} sedes;
typedef struct estantes {
  char estante_numero[5];
  char estante_seccion[50];
} estantes;

typedef struct libros {
  char titulo[200];
  char autor[200];
  char anio[5];
  estantes info_estante;
  sedes info_sede;

} libros;

void count_rows(int *a, FILE *input);
void leer_csv(FILE *fp, libros values[]);
///void printvalues(libros values[], int numb_rows);

#endif
