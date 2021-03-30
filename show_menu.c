#include "header.h"

void show_menu(libros biblioteca[], int numb_rows) {
  int cerrar = 0;
  while (cerrar == 0) {
    int opcion;
    int subopcion;
    int salir = 0;

    p("\n¡Bienvenido a la biblioteca UAI!\n");
    p("Selecciona una opción: \n");
    p("[1]   Añadir/Quitar un libro.\n");
    p("[2]   Añadir/Quitar una sede.\n");
    p("[3]   Añadir/Quitar un piso.\n");
    p("[4]   Añadir/Quitar una sección.\n");
    p("[5]   Editar libro.\n");
    p("[6]   Buscar libro.\n");
    p("[7]   Salir y guardar cambios.\n");
    p("[8]   Salir del sistema.\n");
    p("Opcion: ");
    s("%d", &opcion);
    p("\n");

    do {
      switch (opcion) {
        case 1: {
          p("[Añadir o quitar un libro]\n");
          p("Selecciona una opción:\n");
          p("[1]   Añadir un libro.\n");
          p("[2]   Quitar un libro.\n");
          p("[3]   Atrás.\n");
          p("Opcion: ");
          s("%d", &subopcion);
          p("\n");
          switch (subopcion) {
            case 1: {
              // AñadirLibro()
            } break;
            case 2: {
              // QuitarLibro()
            } break;
            case 3: {
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 2: {
          p("[Añadir o quitar una sede]\n");
          p("Selecciona una opción:\n");
          p("[1]   Añadir una sede.\n");
          p("[2]   Quitar una sede.\n");
          p("[3]   Atrás.\n");
          p("Opcion: ");
          s("%d", &subopcion);
          p("\n");
          switch (subopcion) {
            case 1: {
              // AñadirSede()
            } break;
            case 2: {
              // QuitarSede()
            } break;
            case 3: {
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 3: {
          p("[Añadir o quitar un piso]\n");
          p("Selecciona una opción:\n");
          p("[1]   Añadir un piso.\n");
          p("[2]   Quitar un piso.\n");
          p("[3]   Atrás.\n");
          p("Opcion: ");
          s("%d", &subopcion);
          p("\n");
          switch (subopcion) {
            case 1: {
              // AñadirPiso()
            } break;
            case 2: {
              // QuitarPiso()
            } break;
            case 3: {
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 4: {
          p("[Añadir o quitar una sección]\n");
          p("Selecciona una opción:\n");
          p("[1]   Añadir una sección.\n");
          p("[2]   Quitar una sección.\n");
          p("[3]   Atrás.\n");
          p("Opcion: ");
          s("%d", &subopcion);
          p("\n");
          switch (subopcion) {
            case 1: {
              // AñadirSec()
            } break;
            case 2: {
              // QuitarSec()
            } break;
            case 3: {
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 5: {
          p("[Editar un libro]\n");
          p("Selecciona una opción:\n");
          p("[1]   Editar información del libro.\n");
          p("[2]   Editar sede del libro.\n");
          p("[3]   Editar piso del libro.\n");
          p("[4]   Editar sección del libro.\n");
          p("[5]   Atrás.\n");
          p("Opcion: ");
          s("%d", &subopcion);
          p("\n");
          switch (subopcion) {
            case 1: {
              // OTRO SUBMENÚ // EDITARLIBRO
            } break;
            case 2: {
              // CambiarSede()
            } break;
            case 3: {
              // CambiarPiso()
            } break;
            case 4: {
              // CambiarSec()
            } break;
            case 5: {
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 6: {
          BuscarLibro(biblioteca, numb_rows);
          p("\n[1]   Volver al menú principal.\n");
          p("[2]   Salir del sistema.\n");
          p("Opcion: ");
          s("%d", &subopcion);
          p("\n");
          if (subopcion == 1) {
            p("Volviendo al menú principal...\n");
            salir = 1;
          }
          if (subopcion == 2) {
            p("Saliendo del sistema...\n");
            salir = 1;
            cerrar = 1;
          }
          if (subopcion > 2) {
            break;
          }
        } break;

        case 7: {
          p("Guardando...\n");
          // GuardarCambios()
          p("Saliendo del sistema...\n");
          salir = 1;
          cerrar = 1;
        } break;

        case 8: {
          p("Saliendo del sistema...\n");
          salir = 1;
          cerrar = 1;
        }
      }
    } while (salir == 0);
  }
}