#include "header.h"

int main(int argc, char** argv) {
  char* archivo_csv = argv[1];
  int numb_rows;
  // inicializa el puntero al archivo, r de read mode
  FILE* fp = fopen(archivo_csv, "r");
  FILE* nr = fopen(archivo_csv, "r");

  count_rows(&numb_rows, nr);
  fclose(nr);

  libros bilbioteca[numb_rows];

  leer_csv(fp, bilbioteca);

  fclose(fp);

  desplegar_menu(bilbioteca, numb_rows);

  //printbilbioteca(bilbioteca, numb_rows); DEBUG
  

  return 0;
}
