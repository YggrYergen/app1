#include "header.h"

int main(int argc, char** argv) {
  char* archivo_csv = argv[1];
  int numb_rows;
  // inicializa el puntero al archivo, r de read mode
  FILE* fp = fopen(archivo_csv, "r");

  count_rows(&numb_rows, fp);

  libros values[numb_rows];

  leer_csv(fp, values);

  fclose(fp);

  

  return 0;
}
