#include "header.h"

void desplegar_menu(libros bilbioteca[], int numb_rows){
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
                p("[3]   Atrás\n");
                p("Opción: ");
                s("%d",&opcion2);
                p("\n");
                

                switch(opcion2) { // Opciones en añadir o quitar libro
                    case 1: { // Opción añadir libro
                        libros nuevo_libro;
                    
                        p("\nPor favor, ingrese el nombre del libro que desea añadir: \n");
                        s("%s", nuevo_libro.titulo);

                        p("\nPor favor, ingrese el autor del libro que desea añadir: \n");
                        s("%s", nuevo_libro.autor);

                        p("\nPor favor, ingrese el año de publicación del libro que desea añadir: \n");
                        s("%s", nuevo_libro.anio);

                        p("\nPor favor, indique en qué sede desea guardarlo: \n");
                        s("%s", nuevo_libro.info_sede.sede);

                        p("\nPor favor, indique en qué edificio de la sede %s desea guardarlo: \n", nuevo_libro.info_sede.sede);
                        s("%s", nuevo_libro.info_sede.edificio);

                        p("\nPor favor, indique en qué piso del edificio %s desea guardarlo: \n", nuevo_libro.info_sede.edificio);
                        s("%s", nuevo_libro.info_sede.piso);

                        p("\nPor favor, indique en qué sección guardarlo\n");
                        s("%s",nuevo_libro.info_estante.estante_seccion);

                        p("\nPor favor, indique en qué número de estante guardarlo\n");
                        s("%s",nuevo_libro.info_estante.estante_numero);

                        p("\n\n Libro guardaro exitosamente!\n\n");

                        // FALTA: Asignar nuevo libro a la biblioteca local !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                        break;
                    } // case 1, cierre: opción añadir libro


                    case 2: { // opción quitar libro
                        char nombre_buscado;
                        p("\nPor favor, indique el nombre del libro que desea quitar\n");
                        s("%s",nombre_buscado);
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

            case 8: {
                for(int i = 0; i < numb_rows; i++){
                    p("%s\n",bilbioteca[i].titulo);
                }
            }
        }
    } while (salir == 0);
}
