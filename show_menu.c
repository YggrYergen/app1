#include "header.h"

void show_menu(libros biblioteca[], nuevos_datos NuevosDatos[],
               char* archivo_csv, int j) {
  int cerrar = 0, cont = 0, trig = 0;
  while (cerrar == 0) {
    int opcion, subopcion, salir = 0;
    if (trig == 1) {
      j = 0;
      FILE* notas = fopen(archivo_csv, "r");

      for (char c = getc(notas); c != EOF; c = getc(notas)) {
        if (c == '\n') {
          j++;
        }
      }

      rewind(notas);

      leer_csv(notas, biblioteca);
      fclose(notas);
      trig = 0;
    }

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
              Guardar(biblioteca, j, archivo_csv);
              AgregarLibro(archivo_csv);
              trig = 1;
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              QuitarLibro(biblioteca, j);
              Guardar(biblioteca, j, archivo_csv);
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
              AnadirSede(NuevosDatos, cont);
              cont++;
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              QuitarSede(biblioteca, NuevosDatos, j);
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
              AnadirPiso(NuevosDatos, cont);
              cont++;
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              QuitarPiso(biblioteca, NuevosDatos, j);
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
              AnadirSec(NuevosDatos, cont);
              cont++;
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              QuitarSec(biblioteca, NuevosDatos, j);
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
              EditarLibro(biblioteca, j);
              Guardar(biblioteca, j, archivo_csv);
              opciones(&cerrar, &salir);
            } break;

            case 2: {
              p("\e[1;1H\e[2J");
              EditarSede(biblioteca, j);
              opciones(&cerrar, &salir);
            } break;

            case 3: {
              p("\e[1;1H\e[2J");
              EditarPiso(biblioteca, j);
              opciones(&cerrar, &salir);
            } break;

            case 4: {
              p("\e[1;1H\e[2J");
              EditarSeccion(biblioteca, j);
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
          Guardar(biblioteca, j, archivo_csv);
          BuscarLibro(biblioteca, j);
          opciones(&cerrar, &salir);
        } break;

        case 7: {
          salir = 1;
          cerrar = 1;
        } break;
      }
    } while (salir == 0);
    if (cerrar == 1) {
      p("\e[1;1H\e[2J");
      p("Guardando...\n");
      Guardar(biblioteca, j, archivo_csv);
      p("Saliendo del sistema...\n");
    }
  }
}