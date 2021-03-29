#include "header.h"

void show_menu(libros biblioteca[], int numb_rows) {
  int cerrar = 0;
  while (cerrar == 0) {
    int opcion;
    int subopcion;
    int salir = 0;

    printf("\n¡Bienvenido a la biblioteca UAI!\n");
    printf("Selecciona una opción: \n");
    printf("[1]   Añadir/Quitar un libro.\n");
    printf("[2]   Añadir/Quitar una sede.\n");
    printf("[3]   Añadir/Quitar un piso.\n");
    printf("[4]   Añadir/Quitar una sección.\n");
    printf("[5]   Editar libro.\n");
    printf("[6]   Buscar libro.\n");
    printf("[7]   Salir y guardar cambios.\n");
    printf("[8]   Salir del sistema.\n");
    printf("Opcion: ");
    scanf("%d", &opcion);
    printf("\n");

    do {
      switch (opcion) {
        case 1: {
          printf("[Añadir o quitar un libro]\n");
          printf("Selecciona una opción:\n");
          printf("[1]   Añadir un libro.\n");
          printf("[2]   Quitar un libro.\n");
          printf("[3]   Atrás.\n");
          scanf("%d", &subopcion);
          printf("\n");
          switch (subopcion) {
            case 1: {
              // AñadirLibro()
            } break;
            case 2: {
              // QuitarLibro()
            } break;
            case 3: {
              printf("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 2: {
          printf("[Añadir o quitar una sede]\n");
          printf("Selecciona una opción:\n");
          printf("[1]   Añadir una sede.\n");
          printf("[2]   Quitar una sede.\n");
          printf("[3]   Atrás.\n");
          scanf("%d", &subopcion);
          printf("\n");
          switch (subopcion) {
            case 1: {
              // AñadirSede()
            } break;
            case 2: {
              // QuitarSede()
            } break;
            case 3: {
              printf("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 3: {
          printf("[Añadir o quitar un piso]\n");
          printf("Selecciona una opción:\n");
          printf("[1]   Añadir un piso.\n");
          printf("[2]   Quitar un piso.\n");
          printf("[3]   Atrás.\n");
          scanf("%d", &subopcion);
          printf("\n");
          switch (subopcion) {
            case 1: {
              // AñadirPiso()
            } break;
            case 2: {
              // QuitarPiso()
            } break;
            case 3: {
              printf("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 4: {
          printf("[Añadir o quitar una sección]\n");
          printf("Selecciona una opción:\n");
          printf("[1]   Añadir una sección.\n");
          printf("[2]   Quitar una sección.\n");
          printf("[3]   Atrás.\n");
          scanf("%d", &subopcion);
          printf("\n");
          switch (subopcion) {
            case 1: {
              // AñadirSec()
            } break;
            case 2: {
              // QuitarSec()
            } break;
            case 3: {
              printf("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 5: {
          printf("[Editar un libro]\n");
          printf("Selecciona una opción:\n");
          printf("[1]   Editar información del libro.\n");
          printf("[2]   Editar sede del libro.\n");
          printf("[3]   Editar piso del libro.\n");
          printf("[4]   Editar sección del libro.\n");
          printf("[5]   Atrás.\n");
          scanf("%d", &subopcion);
          printf("\n");
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
              printf("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 6: {
          // BuscarLibro()
          printf("\n");
          printf("[1]   Volver al menú principal.\n");
          printf("[2]   Salir del sistema.\n");
          scanf("%d", &subopcion);
          printf("\n");
          if (subopcion == 1) {
            printf("Volviendo al menú principal...\n");
            cerrar = 1;
            salir = 1;
          }
          if (subopcion == 2) {
            printf("Saliendo del sistema...\n");
            salir = 1;
            cerrar = 1;
          }
          if (subopcion > 2) {
            break;
          }
        } break;

        case 7: {
          printf("Guardando...\n");
          // GuardarCambios()
          printf("Saliendo del sistema...\n");
          salir = 1;
          cerrar = 1;
        } break;

        case 8: {
          printf("Saliendo del sistema...\n");
          salir = 1;
          cerrar = 1;
        }
      }
    } while (salir == 0);
  }
}