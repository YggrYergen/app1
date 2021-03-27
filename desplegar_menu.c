#include "header.h"

int main() {
  int opcion, opcion2, continuar;
  do {
    do {
      p("Selecciona una opcion: \n\n");
      p("[1]   Añadir/Quitar un libro.\n");
      p("[2]   Añadir/Quitar una sede.\n");
      p("[3]   Editar un libro.\n");
      p("[4]   Añadir/Quitar secciones.\n");
      p("[5]   Añadir/Quitar Pisos.\n");
      p("[6]   Buscar Libro.\n");
      p("[7]   Salir del sistema.\n");
      p("Opcion: ");
      s("%d", &opcion);
      p("\n");

    } while (opcion < 1 || opcion > 7);
    switch (opcion) {
      case 1: {
        break;
      }
      case 2: {
        break;
      }
      case 3: {
        do {
          p("Que desea hacer? \n\n");
          p("[1]   editar informacion del libro.\n");
          p("[2]   cambiar libro de sede.\n");
          p("[3]   cambiar libro de seccion.\n");
          p("[4]   cambiar libro de piso.\n");
          p("opcion: ");
          s("%d", &opcion2);
          p("\n");
        } while (opcion2 < 1 || opcion2 > 4);

        break;
      }
      case 4: {
        break;
      }
      case 5: {
        break;
      }
      case 6: {
        break;
      }
      case 7: {
        break;
      }
    }
    p("Desea Continuar?\n\n");
    p("[1] Si. Continuar\n");
    p("[2] No. Salir del sistema\n");
    p("Opcion: ");
    s("%d", &continuar);
    p("\n");
  } while (continuar == 1);

  return 0;
}