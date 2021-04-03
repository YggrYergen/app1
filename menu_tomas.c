#include "header.h"

void desplegar_menu(libros bilbioteca[], int numb_rows){
    int opcion = 0, opcion2 = 0, salir = 0;

    // leer y guardar datos de archivo inventario.csv en biblioteca local: libros
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
                p("[3]   Atrás\n");
                p("Opción: ");
                s("%d",&opcion2);
                p("\n");
                

                switch(opcion2) { // Opciones en añadir o quitar libro
                    case 1: { // Opción añadir libro
                        aniadir_libro();
                        break;
                    } // case 1, cierre: opción añadir libro


                    case 2: { // opción quitar libro
                        quitar_libro();
                        /*char nombre_buscado;
                        p("\nPor favor, indique el nombre del libro que desea quitar\n");
                        s("%s",nombre_buscado); */
                        // FALTA: Buscar el libro en la bilbiotéca local y eliminarlo !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

                        break;
                    } // case 2, cierre: opción quitar libro
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
                        // p("Añadición de sede en proceso\n");
                        aniadir_sede();
                        break;
                    }
                    case 2: {
                        quitar_sede();
                        // p("Quitación de sede en proceso\n");
                        break;
                    }
                } // switch, cierre: Opciones en añadir o quitar sede
            } break; // case 2, cierre: Añadir/Quitar sede


            case 3: {
                 // editar libro, cata
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
                        aniadir_seccion();
                        break;
                    }
                    case 2: {
                        quitar_seccion();
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
                        aniadir_piso();
                        break;
                    }
                    case 2: {
                        quitar_piso();
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
}

/* DATO (No borrar pls):

Para leer una string con espacios ocupar la función: scanf("%[^\n]", variable);
*/