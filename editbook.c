#include "header.h"

void editbook(libros biblioteca[], int numb_rows){
    char book[200];
    char edit[200];
    int opcion3, found = 0, b = 1, a;

    p("Ingresa el nombre del libro que deseas editar: \n");
    scanf("%[^\n]", book);
    
    for(int i = 0; i < numb_rows; i++){
        if(strcmp(book, biblioteca[i].titulo) == 0)
        {
            a = i;
            

            p("Que informacion desea editar. \n\n");
            p("[1]     Autor. \n");
            p("[2]     Titulo. \n");
            p("[3]     Anio. \n");
            p("Seleccione una opcion: ");
            s("%d", &opcion3);
            p("/n");

            switch (opcion3)
            {
            case 1:
            {
                p("Ingrese el autor.\n");
                scanf("%c", edit);
                //strcpy(biblioteca[a].autor, edit);//
                break;
            }
            case 2:
            {
                p("Ingrese titulo.\n");
                scanf("%c", biblioteca[a].titulo);
                //strcpy(biblioteca[a].titulo, edit);//
                break;
            }
            case 3:
            {
                p("Ingrese anio.\n");
                scanf("%c", biblioteca[a].anio);
                //strcpy(biblioteca[a].anio, edit);//
                break;
            }
            default:
            {
                printf("Opcion invalida.\n");
                break;
            }
            }
        }
        else{
        p("No se encuentra el libro.\n");
        }
    }    
}
