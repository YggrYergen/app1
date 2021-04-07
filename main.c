#include "header.h"

int j = 0;

int main(int argc, char** argv) {
  char* archivo_csv = argv[1];
  FILE* notas = fopen(archivo_csv, "r");
  if (!notas) {  // es lo mismo que input==NULL
    printf("Error, ingrese el archico .cvs correctamente.\n");
    return 0;
  }

  for (char c = getc(notas); c != EOF; c = getc(notas)) {
    if (c == '\n') {
      ++j;
    }
  }

  libros biblioteca[j + 1];
  nuevos_datos NuevosDatos[100];
  rewind(notas);

  leer_csv(notas, biblioteca);
  fclose(notas);

  llenarSedes(biblioteca, NuevosDatos, j);
  llenarPisos(biblioteca, NuevosDatos, j);
  llenarSecciones(biblioteca, NuevosDatos, j);
  // show_menu(biblioteca, NuevosDatos, archivo_csv, j);
}