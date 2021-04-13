#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libro.h"

void EditarSede(libros Datos[], int j){
  char edit[200];
  char book[200];
  int found = 0, a, i;

  printf("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  scanf(" %[^\n]", book);
  for (i = 1 ; i <= j ; ++i) {
    if(strcmp(book, Datos[i].titulo) == 0){
      a = i;
      found = 1;
    }
  }
  if(found == 1){
    printf("Ingrese la sede:\n");
    fflush(stdout);
    scanf(" %[^\n]", edit);
    printf("Old: %s\n", Datos[a].info_sede.sede);
    strcpy(Datos[a].info_sede.sede, edit);
    printf("New: %s\n", Datos[a].info_sede.sede);
  }    
}