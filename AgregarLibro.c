#include "header.h"

void AgregarLibro(libros biblioteca[], int numb_rows) {
  int nuevo_row = numb_rows + 1;
  libros nueva_biblioteca[nuevo_row];
                  
  p("\nPor favor, ingrese el nombre del libro que desea añadir: \n");
  s("%s", nueva_biblioteca[nuevo_row].titulo);
  p("\nPor favor, ingrese el autor del libro que desea añadir: \n");
  s("%s", nueva_biblioteca[nuevo_row].autor);
  p("\nPor favor, ingrese el año de publicación del libro que desea añadir: \n");
  s("%s", nueva_biblioteca[nuevo_row].anio);
  p("\nPor favor, indique en qué sede desea guardarlo: \n");
  s("%s", nueva_biblioteca[nuevo_row].info_sede.sede);
  p("\nPor favor, indique en qué edificio de la sede %s desea guardarlo: \n", nueva_biblioteca[nuevo_row].info_sede.sede);
  s("%s", nueva_biblioteca[nuevo_row].info_sede.edificio);
  p("\nPor favor, indique en qué piso del edificio %s desea guardarlo: \n", nueva_biblioteca[nuevo_row].info_sede.edificio);
  s("%s", nueva_biblioteca[nuevo_row].info_sede.piso);
  p("\nPor favor, indique en qué sección guardarlo\n");
  s("%s",nueva_biblioteca[nuevo_row].info_estante.estante_seccion);
  p("\nPor favor, indique en qué número de estante guardarlo\n");
  s("%s",nueva_biblioteca[nuevo_row].info_estante.estante_numero);

  for(int i = 0; i <= nuevo_row - 1; i++){
    nueva_biblioteca[i].titulo = biblioteca[i].titulo;
    nueva_biblioteca[i].autor = biblioteca[i].autor;
    nueva_biblioteca[i].anio = biblioteca[i].anio;
    nueva_biblioteca[i].info_estante.estante_seccion = biblioteca[i].info_estante.estante_seccion;
    nueva_biblioteca[i].info_estante.estante_numero = biblioteca[i].info_estante.estante_numero;
    nueva_biblioteca[i].info_sede.piso = biblioteca[i].info_sede.piso;
    nueva_biblioteca[i].info_sede.edificio = biblioteca[i].info_sede.edificio;
  }
  
  p("\n\n Libro guardaro exitosamente!\n\n");
}   