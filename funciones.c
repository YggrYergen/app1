#include "header.h"

void llenarSedes(libros biblioteca[], nuevos_datos NuevosDatos[], int j) {
  int contador = 0;
  for (int i = 0; i < j; i++) {
    int aux = 0;
    if (i == 0) {
      strcpy(NuevosDatos[i].sede, biblioteca[i].info_sede.sede);
      continue;
    }
    for (int k = i; k > 0; k--) {
      if (strcmp(biblioteca[i].info_sede.sede,
                 biblioteca[k - 1].info_sede.sede) == 0) {
        aux = 1;
        continue;
      }
    }
    if (aux == 0) {
      contador++;
      strcpy(NuevosDatos[contador].sede, biblioteca[i].info_sede.sede);
    }
  }
  for (int i = 0; i <= contador; i++)
    printf("sede %d: %s\n", i + 1, NuevosDatos[i].sede);
}

void llenarPisos(libros biblioteca[], nuevos_datos NuevosDatos[], int j) {
  int contador = 0;
  for (int i = 0; i < j; i++) {
    int aux = 0;
    if (i == 0) {
      strcpy(NuevosDatos[i].piso, biblioteca[i].info_sede.piso);
      continue;
    }
    for (int k = i; k > 0; k--) {
      if (strcmp(biblioteca[i].info_sede.piso,
                 biblioteca[k - 1].info_sede.piso) == 0) {
        aux = 1;
        continue;
      }
    }
    if (aux == 0) {
      contador++;
      strcpy(NuevosDatos[contador].piso, biblioteca[i].info_sede.piso);
    }
  }
  for (int i = 0; i <= contador; i++)
    printf("piso %d: %s\n", i + 1, NuevosDatos[i].piso);
}

void llenarSecciones(libros biblioteca[], nuevos_datos NuevosDatos[], int j) {
  int contador = 0;
  for (int i = 0; i < j; i++) {
    int aux = 0;
    if (i == 0) {
      strcpy(NuevosDatos[i].sec, biblioteca[i].info_estante.estante_seccion);
      continue;
    }
    for (int k = i; k > 0; k--) {
      if (strcmp(biblioteca[i].info_estante.estante_seccion,
                 biblioteca[k - 1].info_estante.estante_seccion) == 0) {
        aux = 1;
        continue;
      }
    }
    if (aux == 0) {
      contador++;
      strcpy(NuevosDatos[contador].sec,
             biblioteca[i].info_estante.estante_seccion);
    }
  }

  for (int i = 0; i <= contador; i++)
    printf("seccion %d: %s\n", i + 1, NuevosDatos[i].sec);
}

void opciones(int *cerrar, int *salir) {
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

void BuscarLibro(libros *biblioteca, int j) {
  char tituloABuscar[200];
  int found = 0;
  int a;

  p("\e[1;1H\e[2J");
  p("Ingresa el nombre del libro: ");
  s(" %[^\n]", tituloABuscar);

  for (int i = 0; i <= j; i++) {
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

void EditarLibro(libros *biblioteca, int j) {
  char book[200];
  char edit[200];
  int opcion3, found = 0, b = 1, a;

  p("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  s(" %[^\n]", book);

  for (int i = 0; i <= j; i++) {
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
        s(" %[^\n]", edit);
        p("\e[1;1H\e[2J");
        p("\nAutor Antiguo: %s\n", biblioteca[a].autor);
        strcpy(biblioteca[a].autor, edit);
        p("Autor Nuevo: %s\n\n", biblioteca[a].autor);
      } break;
      case 2: {
        p("Ingrese titulo.\n");
        fflush(stdout);
        s(" %[^\n]", edit);
        p("Old: %s\n", biblioteca[a].titulo);
        strcpy(biblioteca[a].titulo, edit);
        p("New: %s\n", biblioteca[a].titulo);
      } break;
      case 3: {
        p("Ingrese anio.\n");
        fflush(stdout);
        s(" %[^\n]", edit);
        p("Old: %s\n", biblioteca[a].anio);
        strcpy(biblioteca[a].anio, edit);
        p("New: %s\n", biblioteca[a].anio);
      } break;
      default: {
        p("Opcion invalida.\n");
      } break;
    }
  } else {
    p("No se encuentra el libro.\n");
  }
}

void EditarSeccion(libros *biblioteca, int j) {
  char edit[200];
  char book[200];
  int found = 0, a;

  p("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  s(" %[^\n]", book);
  for (int i = 0; i <= j; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }
  if (found == 1) {
    p("\nSeccion actual: %s\n", biblioteca[a].info_estante.estante_seccion);
    p("\nIngrese nueva seccion:\n");
    fflush(stdout);
    s(" %[^\n]", edit);
    strcpy(biblioteca[a].info_estante.estante_seccion, edit);
    p("Nueva seccion: %s\n", biblioteca[a].info_estante.estante_seccion);
  }
}

void EditarSede(libros *biblioteca, int j) {
  char edit[200];
  char book[200];
  int found = 0, a, i;

  p("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  s(" %[^\n]", book);
  for (i = 0; i <= j; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }
  if (found == 1) {
    p("\nSede actual: %s\n", biblioteca[a].info_sede.sede);
    p("Ingrese nueva sede:\n");
    fflush(stdout);
    s(" %[^\n]", edit);
    strcpy(biblioteca[a].info_sede.sede, edit);
    p("Nueva sede: %s\n", biblioteca[a].info_sede.sede);
  }
}

void EditarPiso(libros *biblioteca, int j) {
  char edit[200];
  char book[200];
  int found = 0, a, i;

  p("Ingresa el nombre del libro que deseas editar: \n");
  fflush(stdout);
  s(" %[^\n]", book);
  for (i = 0; i <= j; i++) {
    if (strcmp(book, biblioteca[i].titulo) == 0) {
      a = i;
      found = 1;
    }
  }
  if (found == 1) {
    p("\nPiso actual: %s\n", biblioteca[a].info_sede.piso);
    p("Ingrese el piso:\n");
    fflush(stdout);
    s(" %[^\n]", edit);
    strcpy(biblioteca[a].info_sede.piso, edit);
    p("Nuevo piso: %s\n", biblioteca[a].info_sede.piso);
  }
}

void AgregarLibro(char *archivo_csv) {
  char info_libro[1024];

  p("\e[1;1H\e[2J");
  p("Ingresa la información del libro a agregar:\n");
  p("El formato admitido es: "
    "\"titulo\",\"autor\",anio,estante_numero,\"estante_seccion\",piso,"
    "\"edificio\",\"sede\"\n");
  fflush(stdout);
  s(" %[^\n]", info_libro);

  FILE *agregar = fopen(archivo_csv, "a");
  fprintf(agregar, "\n%s", info_libro);
  fclose(agregar);

  p("\e[1;1H\e[2J");
  p("\n Libro guardado exitosamente!\n\n");
}

void QuitarLibro(libros Datos[], int j) {
  char tituloAQuitar[200];
  int found = 0;
  int ind;
  int y;

  p("\e[1;1H\e[2J");
  p("Ingresa el nombre del libro a eliminar:\n");
  fflush(stdout);
  s(" %[^\n]", tituloAQuitar);

  for (y = 0; y < j; ++y) {
    if (strcmp(tituloAQuitar, Datos[y].titulo) == 0) {
      found = 1;
      ind = y;
    }
  }

  if (found == 1) {
    p("Libro encontrado.\n");
    strcpy(Datos[ind].titulo, "del");
    strcpy(Datos[ind].autor, " ");
    strcpy(Datos[ind].anio, " ");
    strcpy(Datos[ind].info_estante.estante_numero, " ");
    strcpy(Datos[ind].info_estante.estante_seccion, " ");
    strcpy(Datos[ind].info_sede.piso, " ");
    strcpy(Datos[ind].info_sede.edificio, " ");
    strcpy(Datos[ind].info_sede.sede, " ");
    p("...\n");
    p("Libro eliminado.\n");
  } else {
    p("No se encuentra el libro.\n");
  }
}

void AnadirSede(nuevos_datos NuevosDatos[], int cont) {
  char nuevasede[200];

  p("\e[1;1H\e[2J");
  p("Ingresa la sede que desea anadir: \n");
  fflush(stdout);
  s(" %[^\n]", nuevasede);
  strcpy(NuevosDatos[cont].sede, nuevasede);
  p("La sede %s ", nuevasede);
  p("ha sido agregada.\n");
  fflush(stdout);
}

void QuitarSede(libros Datos[], nuevos_datos NuevosDatos[], int j) {
  int i, ind;
  int found = 0;
  int foundnuevo = 0;
  char nuevasede[200];

  p("\e[1;1H\e[2J");
  p("Ingresa la sede que desea quitar: \n");
  fflush(stdout);
  scanf(" %[^\n]", nuevasede);

  for (i = 0; i <= j; ++i) {
    if (strcmp(nuevasede, Datos[i].info_sede.sede) == 0) {
      ind = i;
      found = 1;
    }
  }

  for (i = 0; i <= 100; ++i) {
    if (strcmp(nuevasede, NuevosDatos[i].sede) == 0) {
      ind = i;
      foundnuevo = 1;
    }
  }

  if (found == 1) {
    printf("La sede tiene un libro asociado.\n");
    foundnuevo = 0;
  }

  if (foundnuevo == 1) {
    strcpy(NuevosDatos[ind].sede, "\0");
    printf("La sede %s ", nuevasede);
    printf("ha sido eliminada.\n");
    fflush(stdout);
  }
}

void AnadirPiso(nuevos_datos NuevosDatos[], int cont) {
  char nuevapiso[200];

  p("\e[1;1H\e[2J");
  p("Ingresa el piso que desea anadir: \n");
  fflush(stdout);
  scanf(" %[^\n]", nuevapiso);
  strcpy(NuevosDatos[cont].piso, nuevapiso);
  printf("El piso %s ", nuevapiso);
  printf("ha sido agregado.\n");
  fflush(stdout);
}

void QuitarPiso(libros Datos[], nuevos_datos NuevosDatos[], int j) {
  int i, ind;
  int found = 0;
  int foundnuevo = 0;
  char nuevapiso[200];

  p("\e[1;1H\e[2J");
  p("Ingresa el piso que desea quitar: \n");
  fflush(stdout);
  scanf(" %[^\n]", nuevapiso);

  for (i = 0; i <= j; ++i) {
    if (strcmp(nuevapiso, Datos[i].info_sede.piso) == 0) {
      ind = i;
      found = 1;
    }
  }

  for (i = 0; i <= 100; ++i) {
    if (strcmp(nuevapiso, NuevosDatos[i].piso) == 0) {
      ind = i;
      foundnuevo = 1;
    }
  }

  if (found == 1) {
    printf("El piso tiene un libro asociado.\n");
    foundnuevo = 0;
  }

  if (foundnuevo == 1) {
    strcpy(NuevosDatos[ind].piso, "\0");
    printf("El piso %s ", nuevapiso);
    printf("ha sido eliminado.\n");
    fflush(stdout);
  }
}

void AnadirSec(nuevos_datos NuevosDatos[], int cont) {
  char nuevasec[200];

  p("\e[1;1H\e[2J");
  p("Ingresa la seccion que desea anadir: \n");
  fflush(stdout);
  scanf(" %[^\n]", nuevasec);
  strcpy(NuevosDatos[cont].sec, nuevasec);
  printf("La seccion %s ", nuevasec);
  printf("ha sido agregada.\n");
  fflush(stdout);
}

void QuitarSec(libros Datos[], nuevos_datos NuevosDatos[], int j) {
  int i, ind;
  int found = 0;
  int foundnuevo = 0;
  char nuevasec[200];

  p("\e[1;1H\e[2J");
  p("Ingresa la sec que desea quitar: \n");
  fflush(stdout);
  scanf(" %[^\n]", nuevasec);

  for (i = 0; i <= j; ++i) {
    if (strcmp(nuevasec, Datos[i].info_estante.estante_seccion) == 0) {
      ind = i;
      found = 1;
    }
  }

  for (i = 0; i <= 100; ++i) {
    if (strcmp(nuevasec, NuevosDatos[i].sec) == 0) {
      ind = i;
      foundnuevo = 1;
    }
  }

  if (found == 1) {
    printf("La seccion tiene un libro asociado.\n");
    foundnuevo = 0;
  }

  if (foundnuevo == 1) {
    strcpy(NuevosDatos[ind].sec, "\0");
    printf("La seccion %s ", nuevasec);
    printf("ha sido eliminada.\n");
    fflush(stdout);
  }
}

void Guardar(libros Datos[], int j, char *archivo_csv) {
  int x;

  FILE *notas2 = fopen(archivo_csv, "w+");

  fprintf(notas2,
          "titulo,autor,anio,estante_numero,estante_seccion,piso,edificio,"
          "sede\n");

  for (x = 0; x < j; ++x) {
    if (strcmp(Datos[x].titulo, "del") == 0) {
      continue;
    }

    if (x < j - 1) {
      fprintf(notas2, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
              "\"", Datos[x].titulo, "\"", ",", "\"", Datos[x].autor, "\"", ",",
              Datos[x].anio, ",", Datos[x].info_estante.estante_numero, ",",
              "\"", Datos[x].info_estante.estante_seccion, "\"", ",",
              Datos[x].info_sede.piso, ",", "\"", Datos[x].info_sede.edificio,
              "\"", ",", "\"", Datos[x].info_sede.sede, "\"\n");
    } else {
      fprintf(notas2, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
              "\"", Datos[x].titulo, "\"", ",", "\"", Datos[x].autor, "\"", ",",
              Datos[x].anio, ",", Datos[x].info_estante.estante_numero, ",",
              "\"", Datos[x].info_estante.estante_seccion, "\"", ",",
              Datos[x].info_sede.piso, ",", "\"", Datos[x].info_sede.edificio,
              "\"", ",", "\"", Datos[x].info_sede.sede, "\"");
    }
  }

  fclose(notas2);
}