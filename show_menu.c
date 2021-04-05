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
    p("[7]   salir del sistema.\n");
    p("Opcion: ");
    s("%d", &opcion);
    p("\n");

    do {
      switch (opcion) {
        case 1: {
          p("\e[1;1H\e[2J");
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
              p("\e[1;1H\e[2J");
              // AñadirLibro()
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              // QuitarLibro()
              opciones(&cerrar, &salir);
            } break;

            case 3: {
              p("\e[1;1H\e[2J");
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 2: {
          p("\e[1;1H\e[2J");
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
              p("\e[1;1H\e[2J");
              // AñadirSede()
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              // QuitarSede()
              opciones(&cerrar, &salir);
            } break;

            case 3: {
              p("\e[1;1H\e[2J");
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 3: {
          p("\e[1;1H\e[2J");
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
              p("\e[1;1H\e[2J");
              // AñadirPiso()
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              // QuitarPiso()
              opciones(&cerrar, &salir);
            } break;

            case 3: {
              p("\e[1;1H\e[2J");
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 4: {
          p("\e[1;1H\e[2J");
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
              p("\e[1;1H\e[2J");
              // AñadirSec()
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              // QuitarSec()
              opciones(&cerrar, &salir);
            } break;

            case 3: {
              p("\e[1;1H\e[2J");
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 5: {
          p("\e[1;1H\e[2J");
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
              p("\e[1;1H\e[2J");
              EditarLibro(biblioteca, numb_rows);
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              EditarSede(biblioteca, numb_rows);
              opciones(&cerrar, &salir);
            } break;

            case 3: {
              p("\e[1;1H\e[2J");
              EditarPiso(biblioteca, numb_rows);
              opciones(&cerrar, &salir);
            } break;

            case 4: {
              p("\e[1;1H\e[2J");
              EditarSeccion(biblioteca, numb_rows);
              opciones(&cerrar, &salir);
            } break;

            case 5: {
              p("\e[1;1H\e[2J");
              p("Volviendo al menú principal...\n");
              salir = 1;
            } break;
          }
        } break;

        case 6: {
          p("\e[1;1H\e[2J");
          BuscarLibro(biblioteca, numb_rows);
          opciones(&cerrar, &salir);
        } break;

        case 7: {
          p("\e[1;1H\e[2J");
          p("Guardando...\n");
          // GuardarCambios()
          p("Saliendo del sistema...\n");
          salir = 1;
          cerrar = 1;
        } break;
      }
    } while (salir == 0);
  }
}