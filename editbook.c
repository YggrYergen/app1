#include "header.h"

void editbook() {
    char book[20];
    char edit[20];
    libros *b;
    int opcion3, a, c;

    p("Ingresa el nombre del libro que deseas editar: \n");
    fflush(stdin);
    fgets("%s", &book, stdin);
    
    while (b != NULL)
    {
        if (strcmp(&book, values.titulo) != 0)
        {
            p("No se encuentra el libro. \n");
        }

        else
        {
            c = a;

            p("Que informacion desea editar\n\n");
            p("[1]     Autor.\n");
            p("[2]     Titulo.\n");
            p("[3]     Anio\n");
            p("Seleccione una opcion: ");
            s("%d", &opcion3);
            p("/n");

            switch (opcion3)
            {

                case 1:
                {
                    p("Ingrese el autor.\n");
                    fgets("%s", &edit, stdin);
                    values[a].autor = &edit;
                }
                case 2:
                {
                    p("Ingrese titulo.\n");
                    fgets("%s", &edit, stdin);
                    values[a].titulo = &edit;
                }
                case 3:
                {
                    p("Ingrese anio. \n");
                    fgets("%s", &edit, stdin);
                    values[a].anio = &edit;
                }
            }
        }
    }
}

