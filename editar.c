#include "header.h"

void aniadir_libro(libros biblioteca[], int numb_rows, libros nueva_biblioteca[]) {
  int nuevo_row = numb_rows + 1;
  libros nuevo_libro;
                  
  p("\nPor favor, ingrese el nombre del libro que desea añadir: \n");
  s("%s", nuevo_libro.titulo);
  p("\nPor favor, ingrese el autor del libro que desea añadir: \n");
  s("%s", nuevo_libro.autor);
  p("\nPor favor, ingrese el año de publicación del libro que desea añadir: \n");
  s("%s", nuevo_libro.anio);
  p("\nPor favor, indique en qué sede desea guardarlo: \n");
  s("%s", nuevo_libro.info_sede.sede);
  p("\nPor favor, indique en qué edificio de la sede %s desea guardarlo: \n", nuevo_libro.info_sede.sede);
  s("%s", nuevo_libro.info_sede.edificio);
  p("\nPor favor, indique en qué piso del edificio %s desea guardarlo: \n", nuevo_libro.info_sede.edificio);
  s("%s", nuevo_libro.info_sede.piso);
  p("\nPor favor, indique en qué sección guardarlo\n");
  s("%s",nuevo_libro.info_estante.estante_seccion);
  p("\nPor favor, indique en qué número de estante guardarlo\n");
  s("%s",nuevo_libro.info_estante.estante_numero);

  // PSEUDO: nueva_bibilioteca = biblioteca + nuevo_libro;
  

  p("\n\n Libro guardaro exitosamente!\n\n");
  return nueva_biblioteca;    
}

void quitar_libro(){
  // leer libros existentes,
  // mostrar opciones para borrado
  // Si no hay, mensaje e instrucciones.
  // tomar datos libro a borrar
  // borrar libro
}

void aniadir_sede(){
  // leer las sedes que hay
  // preguntar
  // añadir a las sedes que hay
}

void quitar_sede() {
  // leer y desplegar opciones
  // while si no hay, mensaje.
  //  leer salida u opción.


}

void aniadir_seccion(){
  // crear nueva sección, añadiral a la base de datos. (¿Se puede crear añadiéndola a la base, en un mismo paso?)
}

void quitar_seccion(){
  // borrar sección de la db si es qué está vacia
}

void aniadir_piso(){
  // leer pisos existentes. Crear piso nuevo y añadir  pisos existentes.
}

void quitar_piso(){
  // revisar pisos, mostrar los vacios  
}

void buscar_libro(libros biblioteca[], int numb_rows) {
  char tituloABuscar[200];
  int found = 0;
  int ind;
  int y;

  printf("Ingresa el nombre del libro: \n");
  scanf("%[^\n]", tituloABuscar);

  for (y = 1 ; y <= numb_rows ; ++y) {
    if (strcmp(tituloABuscar, biblioteca[y].titulo) == 0) {
      found = 1;
      ind = y;
    }
  }

  if (found == 1) {
      printf("Libro encontrado.\n");
      printf("Información acerca del libro:\n");
      printf("  Título: %s\n", biblioteca[ind].titulo);
      printf("  Autor: %s\n", biblioteca[ind].autor);
      printf("  Año: %s\n", biblioteca[ind].anio);
      printf("Ubicación del libro:\n");
      printf("  Estante: %s\n", biblioteca[ind].info_estante.estante_numero);
      printf("  Sección: %s\n", biblioteca[ind].info_estante.estante_seccion);
      printf("  Piso: %s\n", biblioteca[ind].info_sede.piso);
      printf("  Edificio:%s\n", biblioteca[ind].info_sede.edificio);
      printf("  Sede: %s\n", biblioteca[ind].info_sede.sede);
  } else {
    printf("No se encuentra el libro.\n");
  }
}
