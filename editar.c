#include "header.h"

void aniadir_libro(libros biblioteca[], int numb_rows) {
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


void quitar_libro(libros biblioteca[], int row_number){
    borrar = s(¿qué libro desea borrar?);
    buscar match y eliminar;


    biblioteca[índice_libro].todo = " ";

  // 
  // leer libros existentes,
  // mostrar opciones para borrado
  // Si no hay, mensaje e instrucciones.
  // tomar datos libro a borrar
  // borrar libro
}


void aniadir_sede(libros biblioteca[], int row_number){
  libros nueva_biblioteca[actual+1] = 0 0 0 0 0 sede nueva; 
  equal(biblioteca, nueva_biblioteca);
  return nueva_biblioteca;

  // leer las sedes que hay
  // preguntar
  // añadir a las sedes que hay
}


void quitar_sede() {
  char borrar;
  p("Qué sede desea quitar? Recuerde que debe estar vacía. Si hay libros en ella puede irse a la chucha tranqui");
  s("%[^\n]", borrar);

  // leer y desplegar opciones
  // while si no hay, mensaje.
  //  leer salida u opción.


}


void aniadir_seccion(){
  // crear nueva sección, añadiral a la base de datos. (¿Se puede crear añadiéndola a la base, en un mismo paso?)
}


void quitar_seccion(libros biblioteca[], int row_number){
  char borrar;
  p("Qué sección desea quitar? Recuerde que debe estar vacía. Si hay libros en ella puede irse a la chucha tranqui");
  s("%[^\n]", borrar);
  
  for (int i = 0; i < row_number; i++){
    if (biblioteca[i].info_estante.estante_seccion == borrar){
      p("No se puede borrar un estante no vacío.\n");
      p("Quite todos los libros del estante primero.\n\n");

      //Volver al menu principal
    } else {
      
    }
  }
  
  
  /* Para todos los rows/libros de la bibilioteca,
    revisar que en ninguno de ellos, sección = borrar.
    Si está vacía borrar.
    Si no mensaje. */

  // ¿Qué sección desea quitar?
  // Revisar que no hayan libros en esa sección:
  // si no esstá vacia, mensaje y opciones.
  // si está vacia, borrar 
  //
  // si la sección de Xn coincide con la que queremos borrar, borrar.
  // borrar sección de la db si es qué está vacia
}


void aniadir_piso(){
  // OTRO
  // leer pisos existentes. Crear piso nuevo y añadir  pisos existentes.
}


void quitar_piso(){
  // OTRO
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
