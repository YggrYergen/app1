#include "header.h"

int main(){
    int opcion = 0, opcion2 = 0, salir = 0;

    do {
        p("\nBienvenido a la bilbioteca UAI!\n");
        p("Selecciona una opcion: \n\n");
        p("[1]   Añadir/Quitar un libro.\n");
        p("[2]   Añadir/Quitar una sede.\n");
        p("[3]   Editar un libro.\n");
        p("[4]   Añadir/Quitar secciones.\n");
        p("[5]   Añadir/Quitar Pisos.\n");
        p("[6]   Buscar Libro.\n");
        p("[7]   Salir del sistema.\n");
        p("Opcion: ");
        s("%d",&opcion);
        p("\n");
        
        switch(opcion) {
            case 1: { // Añadir/Quitar libro
                p("Seleccionó [1]: Añadir o quitar libro, por favor selecciona:\n\n");
                p("[1]   Añadir libro\n");
                p("[2]   Quitar libro\n");
                p("Opción: ");
                s("%d",&opcion2);
                p("\n");
                
                switch(opcion2) { // Opciones en añadir o quitar libro
                    case 1: {
                        p("Añadición de libro en proceso\n\n");
                        break;
                    }
                    case 2: {
                        p("Quitación de libro en proceso\n\n");
                        break;
                    }
                    break;
                } // switch, cierre: Opciones en añadir o quitar libro
            } break; // case 1, cierre: Añadir/Quitar libro


            case 2: { // Añadir/Quitar sede
                p("Seleccionó [2]: Añadir o quitar sede, por favor selecciona:\n\n");
                p("[1]   Añadir sede\n");
                p("[2]   Quitar sede\n");
                p("Opción: ");
                s("%d",&opcion2);
                p("\n");

                switch(opcion2) { // Opciones añadir o quitar sede
                    case 1: {
                        p("Añadición de sede en proceso\n");
                        break;
                    }
                    case 2: {
                        p("Quitación de sede en proceso\n");
                        break;
                    }
                } // switch, cierre: Opciones en añadir o quitar sede
            } break; // case 2, cierre: Añadir/Quitar sede


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
            } break;


            case 4: { // Añadir/Quitar seciones
                p("Seleccionó [3]: Añadir o quitar sección, por favor selecciona:\n\n");
                p("[1]   Añadir sección\n");
                p("[2]   Quitar sección\n");
                p("Opción: ");
                s("%d",&opcion2);
                p("\n");

                switch(opcion2) { // Opciones en añadir o quitar sección
                    case 1: {
                        p("Añadición de sección en proceso\n");
                        break;
                    }
                    case 2: {
                        p("Quitación de sección en proceso\n");
                        break;
                    }
                } // switch, cierre: Opciones en añadir o quitar sección
            } break; // case 4, cierre: Añadir/Quitar seciones


            case 5: { // Añadir/Quitar pisos
                p("Seleccionó [5]: Añadir o quitar pisos, por favor selecciona:\n\n");
                p("[1]   Añadir pisos\n");
                p("[2]   Quitar pisos\n");
                p("Opción: ");
                s("%d",&opcion2);
                p("\n");

                switch(opcion2) { // Opciones en añadir o quitar piso
                    case 1: {
                        p("Añadición en proceso\n");
                        break;
                    }
                    case 2: {
                        p("Quitación en proceso\n");
                        break;
                    }
                } // switch, cierre: Opciones en añadir o quitar piso
            } break; // case 5, cierre: Añadir/Quitar pisos


            case 6: {
                /* Buscar libro */ //  <---------------------------------------------------------------------------- Cata
            } break;


            case 7: { // Salir y guardar
                p("Seleccionó [7]: Salir y guardar, adiós.\n");
                salir = 1;
            } break; // case 7, cierre: Salir y guardar
        }
    } while (salir == 0);
    return 0;
}
