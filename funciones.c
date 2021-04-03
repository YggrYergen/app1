#include "header.h"

void BuscarLibro(libros biblioteca[], int numb_rows) {
  char tituloABuscar[200];
  int found = 0;
  int ind;

  p("Ingresa el nombre del libro: ");
  s(" %[^\n]", tituloABuscar);

  for (int i = 0; i < numb_rows; i++) {
    if (strcmp(tituloABuscar, biblioteca[i].titulo) == 0) {
      found = 1;
      ind = i;
    }
  }

  if (found == 1) {
    p("Libro encontrado.\n");
    p("Información acerca del libro:\n");
    p("  Título: %s\n", biblioteca[ind].titulo);
    p("  Autor: %s\n", biblioteca[ind].autor);
    p("  Año: %s\n", biblioteca[ind].anio);
    p("Ubicación del libro:\n");
    p("  Estante: %s\n", biblioteca[ind].info_estante.estante_numero);
    p("  Sección: %s\n", biblioteca[ind].info_estante.estante_seccion);
    p("  Piso: %s\n", biblioteca[ind].info_sede.piso);
    p("  Edificio:%s\n", biblioteca[ind].info_sede.edificio);
    p("  Sede: %s\n", biblioteca[ind].info_sede.sede);
  } else {
    p("No se encuentra el libro.\n");
  }
}

void EditarLibro(libros biblioteca[], int numb_rows) {
  char book[200];
  char edit[200];
  int opcion3, found = 0, b = 1, a;

  p("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  scanf(" %[^\n]", book);

  for (int i = 0; i < numb_rows; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }

  if (found == 1) {
    p("Que informacion desea editar. \n");
    p("[1]     Autor. \n");
    p("[2]     Titulo. \n");
    p("[3]     Anio. \n");
    p("Seleccione una opcion: ");
    s("%d", &opcion3);

    switch (opcion3) {
      case 1: {
        p("Ingrese el autor:\n");
        fflush(stdout);
        scanf(" %[^\n]", edit);
        p("\e[1;1H\e[2J");
        p("\nAutor Antiguo: %s\n", biblioteca[a].autor);
        strcpy(biblioteca[a].autor, edit);
        p("Autor Nuevo: %s\n\n", biblioteca[a].autor);
      } break;
      case 2: {
        p("Ingrese titulo.\n");
        fflush(stdout);
        scanf(" %[^\n]", edit);
        p("Old: %s\n", biblioteca[a].titulo);
        strcpy(biblioteca[a].titulo, edit);
        p("New: %s\n", biblioteca[a].titulo);
      } break;
      case 3: {
        p("Ingrese anio.\n");
        fflush(stdout);
        scanf(" %[^\n]", edit);
        p("Old: %s\n", biblioteca[a].anio);
        strcpy(biblioteca[a].anio, edit);
        p("New: %s\n", biblioteca[a].anio);
      } break;
      default: {
        printf("Opcion invalida.\n");
      } break;
    }
  } else {
    printf("No se encuentra el libro.\n");
  }
}