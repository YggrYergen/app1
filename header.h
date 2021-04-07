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

// void printvalues(libros *biblioteca, int *numb_rows);
void count_rows(int *a, FILE *input);
void leer_csv(FILE *fp, libros *biblioteca);
void llenarSedes(libros biblioteca[], nuevos_datos NuevosDatos[], int j);
void llenarPisos(libros biblioteca[], nuevos_datos NuevosDatos[], int j);
void llenarSecciones(libros biblioteca[], nuevos_datos NuevosDatos[], int j);
void show_menu(libros biblioteca[], nuevos_datos NuevosDatos[],
               char *archivo_csv, int j);
void opciones(int *cerrar, int *salir);
void BuscarLibro(libros *biblioteca, int j);
void EditarLibro(libros *biblioteca, int j);
void EditarSeccion(libros *biblioteca, int j);
void EditarSede(libros *biblioteca, int j);
void EditarPiso(libros *biblioteca, int j);
void AgregarLibro(char *archivo_csv);
void QuitarLibro(libros Datos[], int j);
void AnadirSede(nuevos_datos NuevosDatos[], int cont);
void QuitarSede(libros Datos[], nuevos_datos NuevosDatos[], int j);
void AnadirPiso(nuevos_datos NuevosDatos[], int cont);
void QuitarPiso(libros Datos[], nuevos_datos NuevosDatos[], int j);
void AnadirSec(nuevos_datos NuevosDatos[], int cont);
void QuitarSec(libros Datos[], nuevos_datos NuevosDatos[], int j);
void Guardar(libros Datos[], int j, char *archivo_csv);

#endif