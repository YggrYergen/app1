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

typedef struct nuevos_datos {
  char sede[50];
  char piso[5];
  char sec[50];
} nuevos_datos;

void printvalues(libros *biblioteca, int *numb_rows);
void count_rows(int *a, FILE *input);
void leer_csv(FILE *fp, libros *biblioteca);
void show_menu(libros *biblioteca, int *numb_rows);
void opciones(int *cerrar, int *salir);
void BuscarLibro(libros *biblioteca, int *numb_rows);
void EditarLibro(libros *biblioteca, int *numb_rows);
void EditarSeccion(libros *biblioteca, int *numb_rows);
void EditarSede(libros *biblioteca, int *numb_rows);
void EditarPiso(libros *biblioteca, int *numb_rows);
// void QuitarLibro(libros biblioteca[], int numb_rows);
void AgregarLibro(libros *biblioteca, int *numb_rows);

#endif