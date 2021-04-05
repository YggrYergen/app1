#include "header.h"

void opciones(int* cerrar, int* salir) {
  int subopcion;
  p("\n[1]   Volver al menú principal.\n");
  p("[2]   Salir del sistema.\n");
  p("Opcion: ");
  s("%d", &subopcion);
  p("\n");
  if (subopcion == 1) {
    p("\e[1;1H\e[2J");
    p("Volviendo al menú principal...\n");
    *salir = 1;
  }
  if (subopcion == 2) {
    p("\e[1;1H\e[2J");
    p("Saliendo del sistema...\n");
    *salir = 1;
    *cerrar = 1;
  }
}

void BuscarLibro(libros biblioteca[], int numb_rows) {
  char tituloABuscar[200];
  int found = 0;
  int a;

  p("\e[1;1H\e[2J");
  p("Ingresa el nombre del libro: ");
  s(" %[^\n]", tituloABuscar);

  for (int i = 0; i < numb_rows; i++) {
    if (strcmp(tituloABuscar, biblioteca[i].titulo) == 0) {
      found = 1;
      a = i;
    }
  }

  if (found == 1) {
    p("\nLibro encontrado.\n");
    p("Información acerca del libro:\n");
    p("  Título: %s\n", biblioteca[a].titulo);
    p("  Autor: %s\n", biblioteca[a].autor);
    p("  Año: %s\n", biblioteca[a].anio);
    p("Ubicación del libro:\n");
    p("  Estante: %s\n", biblioteca[a].info_estante.estante_numero);
    p("  Sección: %s\n", biblioteca[a].info_estante.estante_seccion);
    p("  Piso: %s\n", biblioteca[a].info_sede.piso);
    p("  Edificio:%s\n", biblioteca[a].info_sede.edificio);
    p("  Sede: %s\n", biblioteca[a].info_sede.sede);
  } else {
    p("No se encuentra el libro.\n");
  }
}

void EditarLibro(libros biblioteca[], int numb_rows) {
  char book[200];
  char edit[200];
  int opcion3, found = 0, b = 1, a;

  p("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  scanf(" %[^\n]", book);

  for (int i = 0; i < numb_rows; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }

  if (found == 1) {
    p("Que informacion desea editar. \n");
    p("[1]     Autor. \n");
    p("[2]     Titulo. \n");
    p("[3]     Anio. \n");
    p("Seleccione una opcion: ");
    s("%d", &opcion3);

    switch (opcion3) {
      case 1: {
        p("Ingrese el autor:\n");
        fflush(stdout);
        scanf(" %[^\n]", edit);
        p("\e[1;1H\e[2numb_rows");
        p("\nAutor Antiguo: %s\n", biblioteca[a].autor);
        strcpy(biblioteca[a].autor, edit);
        p("Autor Nuevo: %s\n\n", biblioteca[a].autor);
      } break;
      case 2: {
        p("Ingrese titulo.\n");
        fflush(stdout);
        scanf(" %[^\n]", edit);
        p("Old: %s\n", biblioteca[a].titulo);
        strcpy(biblioteca[a].titulo, edit);
        p("New: %s\n", biblioteca[a].titulo);
      } break;
      case 3: {
        p("Ingrese anio.\n");
        fflush(stdout);
        scanf(" %[^\n]", edit);
        p("Old: %s\n", biblioteca[a].anio);
        strcpy(biblioteca[a].anio, edit);
        p("New: %s\n", biblioteca[a].anio);
      } break;
      default: {
        printf("Opcion invalida.\n");
      } break;
    }
  } else {
    printf("No se encuentra el libro.\n");
  }
}

void EditarSeccion(libros biblioteca[], int numb_rows) {
  char edit[200];
  char book[200];
  int found = 0, a;

  printf("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  scanf(" %[^\n]", book);
  for (int i = 0; i < numb_rows; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }
  if (found == 1) {
    printf("\nSeccion actual: %s\n",
           biblioteca[a].info_estante.estante_seccion);
    printf("\nIngrese nueva seccion:\n");
    fflush(stdout);
    scanf(" %[^\n]", edit);
    strcpy(biblioteca[a].info_estante.estante_seccion, edit);
    printf("Nueva seccion: %s\n", biblioteca[a].info_estante.estante_seccion);
  }
}

void EditarSede(libros biblioteca[], int numb_rows) {
  char edit[200];
  char book[200];
  int found = 0, a, i;

  printf("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  scanf(" %[^\n]", book);
  for (i = 0; i < numb_rows; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }
  if (found == 1) {
    printf("\nSede actual: %s\n", biblioteca[a].info_sede.sede);
    printf("Ingrese nueva sede:\n");
    fflush(stdout);
    scanf(" %[^\n]", edit);
    strcpy(biblioteca[a].info_sede.sede, edit);
    printf("Nueva sede: %s\n", biblioteca[a].info_sede.sede);
  }
}

void EditarPiso(libros biblioteca[], int numb_rows) {
  char edit[200];
  char book[200];
  int found = 0, a, i;

  printf("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  scanf(" %[^\n]", book);
  for (i = 0; i < numb_rows; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }
  if (found == 1) {
    printf("\nPiso actual: %s\n", biblioteca[a].info_sede.piso);
    printf("Ingrese el piso:\n");
    fflush(stdout);
    scanf(" %[^\n]", edit);
    strcpy(biblioteca[a].info_sede.piso, edit);
    printf("Nuevo piso: %s\n", biblioteca[a].info_sede.piso);
  }
}
/*
void QuitarLibro(libros biblioteca[], int numb_rows) {
  char tituloABuscar[200];
  char vacio = "";
  int found = 0;
  int a, borrar_o_no;

  p("Ingresa el nombre del libro que deseas quitar: ");
  s(" %[^\n]", tituloABuscar);

  for (int i = 0; i < numb_rows; i++) {
    if (strcmp(tituloABuscar, biblioteca[i].titulo) == 0) {
      found = 1;
      a = i;
    }
  }

  if (found == 1) {
    p("Libro encontrado.\n");
    p("Información acerca del libro:\n");
    p("  Título: %s\n", biblioteca[a].titulo);
    p("  Autor: %s\n", biblioteca[a].autor);
    p("  Año: %s\n", biblioteca[a].anio);
    p("Ubicación del libro:\n");
    p("  Estante: %s\n", biblioteca[a].info_estante.estante_numero);
    p("  Sección: %s\n", biblioteca[a].info_estante.estante_seccion);
    p("  Piso: %s\n", biblioteca[a].info_sede.piso);
    p("  Edificio:%s\n", biblioteca[a].info_sede.edificio);
    p("  Sede: %s\n", biblioteca[a].info_sede.sede);
    p("¿Está seguro que desea quitar el libro?\n");
    p("[1]   Sí, quitar.\n");
    p("[2]   No, dejar.\n");
    s("%d", borrar_o_no);
    if (borrar_o_no == 1) {
      strcpy(biblioteca[a].titulo, vacio);
      strcpy(biblioteca[a].autor, vacio);
      strcpy(biblioteca[a].anio, vacio);
      strcpy(biblioteca[a].info_estante.estante_numero, vacio);
      strcpy(biblioteca[a].info_estante.estante_seccion, vacio);
      strcpy(biblioteca[a].info_sede.piso, vacio);
      strcpy(biblioteca[a].info_sede.edificio, vacio);
      strcpy(biblioteca[a].info_sede.sede, vacio);
    } else {
      p("Volviendo al menú principal...");
    }

  } else {
    p("No se encuentra el libro.\n");
  }
}

void AgregarLibro(libros biblioteca[], int numb_rows) {
  int nuevo_row = numb_rows + 1;
  libros nueva_biblioteca[nuevo_row];

  p("\nPor favor, ingrese el nombre del libro que desea añadir: \n");
  s("%s", nueva_biblioteca[nuevo_row].titulo);
  p("\nPor favor, ingrese el autor del libro que desea añadir: \n");
  s("%s", nueva_biblioteca[nuevo_row].autor);
  p("\nPor favor, ingrese el año de publicación del libro que desea añadir: "
    "\n");
  s("%s", nueva_biblioteca[nuevo_row].anio);
  p("\nPor favor, aique en qué sede desea guardarlo: \n");
  s("%s", nueva_biblioteca[nuevo_row].info_sede.sede);
  p("\nPor favor, aique en qué edificio de la sede %s desea guardarlo: \n",
    nueva_biblioteca[nuevo_row].info_sede.sede);
  s("%s", nueva_biblioteca[nuevo_row].info_sede.edificio);
  p("\nPor favor, aique en qué piso del edificio %s desea guardarlo: \n",
    nueva_biblioteca[nuevo_row].info_sede.edificio);
  s("%s", nueva_biblioteca[nuevo_row].);
  p("\nPor favor, aique en qué sección guardarlo\n");
  s("%s", nueva_biblioteca[nuevo_row].info_estante.estante_seccion);
  p("\nPor favor, aique en qué número de estante guardarlo\n");
  s("%s", nueva_biblioteca[nuevo_row].info_estante.estante_numero);

  for (int i = 0; i <= nuevo_row - 1; i++) {
    strcpy(nueva_biblioteca[i].titulo, biblioteca[i].titulo);
    strcpy(nueva_biblioteca[i].autor, biblioteca[i].autor);
    strcpy(nueva_biblioteca[i].anio, biblioteca[i].anio);
    strcpy(nueva_biblioteca[i].info_estante.estante_numero,
           biblioteca[i].info_estante.estante_numero);
    strcpy(nueva_biblioteca[i].info_estante.estante_numero,
           biblioteca[i].info_estante.estante_numero);
    strcpy(nueva_biblioteca[i].info_sede.piso, biblioteca[i].info_sede.piso);
    strcpy(nueva_biblioteca[i].info_sede.edificio,
           biblioteca[i].info_sede.edificio);
    strcpy(nueva_biblioteca[i].info_sede.sede, biblioteca[i].info_sede.sede);
  }

  p("\n\n Libro guardaro exitosamente!\n\n");
}*/
