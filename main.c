#include "header.h"

int main(int argc, char** argv) {
  char* archivo_csv = argv[1];
  int numb_rows;
  // inicializa el puntero al archivo, r de read mode
  FILE* fp = fopen(archivo_csv, "r");
  FILE* nr = fopen(archivo_csv, "r");
  if (!fp) {  // es lo mismo que input==NULL
    printf("Error\n");
    return 0;
  }

  count_rows(&numb_rows, nr);
  fclose(nr);

  libros biblioteca[numb_rows];

  leer_csv(fp, biblioteca);
  fclose(fp);

  show_menu(biblioteca, numb_rows);

  // printbiblioteca(biblioteca, numb_rows); DEBUG

  return 0;
}