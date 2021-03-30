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