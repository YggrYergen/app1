#include "header.h"

void count_rows(int *numb_rows, FILE *input) {
  int row_count = 0;
  char buff[BUFFER];
  while (fgets(buff, 1024, input)) {
    row_count++;
    if (row_count == 1)
      continue;  // esto es para no contar la primera fila de "etiquetas"
    *numb_rows = row_count - 1;
  }
}

void leer_csv(FILE *fp, libros biblioteca[]) {
  int i, row_count = 0, field_count = 0;
  char buff[BUFFER];

  i = 0;
  while (fgets(buff, 1024, fp)) {
    field_count = 0;
    row_count++;
    if (row_count == 1)
      continue;  // esto es para no contar la primera fila de "etiquetas"

    char *field = strtok(buff, ",\"");
    char *basura;
    // separa buff por comas

    while (field)  // field!=NULL+
    {
      if (field_count == 0) {
        strcpy(biblioteca[i].titulo, field);
        basura = strtok(NULL, "\"");
        field = strtok(NULL, "\"");
      }

      if (field_count == 1) {
        strcpy(biblioteca[i].autor, field);
        field = strtok(NULL, ",");
      }

      if (field_count == 2) {
        strcpy(biblioteca[i].anio, field);
        field = strtok(NULL, ",");
      }

      if (field_count == 3) {
        strcpy(biblioteca[i].info_estante.estante_numero, field);
        field = strtok(NULL, "\"");
        ;
      }

      if (field_count == 4) {
        strcpy(biblioteca[i].info_estante.estante_seccion, field);
        field = strtok(NULL, ",");
      }

      if (field_count == 5) {
        strcpy(biblioteca[i].info_sede.piso, field);
        field = strtok(NULL, "\"");
      }

      if (field_count == 6) {
        strcpy(biblioteca[i].info_sede.edificio, field);
        basura = strtok(NULL, "\"");
        field = strtok(NULL, "\"");
      }

      if (field_count == 7) {
        strcpy(biblioteca[i].info_sede.sede, field);
        basura = strtok(NULL, "\0");
        ;
        break;
      }
      field_count++;
    }
    i++;
  }
}

void printvalues(libros biblioteca[], int *numb_rows) {
  for (int i = 0; i < *numb_rows; i++) {
    printf(
        "titulo: %s, autor: %s, anio: %s, Estante_Numero: %s, Estante_seccion: "
        "%s, piso: %s\n, edificio: %s, sede: %s\n",
        biblioteca[i].titulo, biblioteca[i].autor, biblioteca[i].anio,
        biblioteca[i].info_estante.estante_numero,
        biblioteca[i].info_estante.estante_seccion,
        biblioteca[i].info_sede.piso, biblioteca[i].info_sede.edificio,
        biblioteca[i].info_sede.sede);
  }
}
