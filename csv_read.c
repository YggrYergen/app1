#include "header.h"

void count_rows(int *a, FILE *input) {
  int row_count = 0;
  char buff[BUFFER];
  while (fgets(buff, 1024, input)) {
    row_count++;
    if (row_count == 1)
      continue;  // esto es para no contar la primera fila de "etiquetas"

    char *field = strtok(buff, ",");  // separa buff por comas
    while (field)                     // field!=NULL
    {
      field = strtok(NULL, ",");
    }
    *a = row_count - 1;
  }
}

void leer_csv(FILE *fp, libros bilbioteca[]) {
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
        strcpy(bilbioteca[i].titulo, field);
        basura = strtok(NULL, "\"");
        field = strtok(NULL, "\"");
      }

      if (field_count == 1) {
        strcpy(bilbioteca[i].autor, field);
        field = strtok(NULL, ",");
      }

      if (field_count == 2) {
        strcpy(bilbioteca[i].anio, field);
        field = strtok(NULL, ",");
      }

      if (field_count == 3) {
        strcpy(bilbioteca[i].info_estante.estante_numero, field);
        field = strtok(NULL, "\"");
        ;
      }

      if (field_count == 4) {
        strcpy(bilbioteca[i].info_estante.estante_seccion, field);
        field = strtok(NULL, ",");
      }

      if (field_count == 5) {
        strcpy(bilbioteca[i].info_sede.piso, field);
        field = strtok(NULL, "\"");
      }

      if (field_count == 6) {
        strcpy(bilbioteca[i].info_sede.edificio, field);
        basura = strtok(NULL, "\"");
        field = strtok(NULL, "\"");
      }

      if (field_count == 7) {
        strcpy(bilbioteca[i].info_sede.sede, field);
        basura = strtok(NULL, "\0");
        ;
        break;
      }
      field_count++;
    }
    i++;
  }
}

/* DEBUG
void printvalues(libros bilbioteca[], int numb_rows) {
  for (int i = 0; i < numb_rows; i++) {
    printf( 
        "titulo: %s, autor: %s, anio: %s, Estante_Numero: %s, Estante_seccion: "
        "%s, piso: %s\n, edificio: %s, sede: %s\n",
        bilbioteca[i].titulo, bilbioteca[i].autor, bilbioteca[i].anio,
        bilbioteca[i].info_estante.estante_numero, bilbioteca[i].info_estante.estante_seccion,
        bilbioteca[i].info_sede.piso, bilbioteca[i].info_sede.edificio, bilbioteca[i].info_sede.sede);
  }
} 
*/
