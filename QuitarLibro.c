#include "header.h"


void QuitarLibro(libros biblioteca[], int numb_rows) {
  char tituloABuscar[200];
  int found = 0;
  int ind;

  p("Ingresa el nombre del libro que desea quitar: ");
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

    int borrar_o_no;
    p("¿Está seguro que desea quitar el libro?\n");
    p("[1]   Sí, quitar.\n");
    p("[2]   No, dejar.\n");
    s("%d",borrar_o_no);
    if(borrar_o_no == 1){
        biblioteca[ind].titulo = " ";
        biblioteca[ind].autor = " ";
        biblioteca[ind].anio = " ";
        biblioteca[ind].info_estante.estante_numero = " ";
        biblioteca[ind].info_estante.estante_seccion = " ";
        biblioteca[ind].info_sede.piso = " ";
        biblioteca[ind].info_sede.edificio = " "; // libros biblioteca: expression must be a modifiable lvalue C/C++(137)
        biblioteca[ind].info_sede.sede = " ";
    } else {
        p("Volviendo al menú principal...");
    }

  } else {
    p("No se encuentra el libro.\n");
  }
}