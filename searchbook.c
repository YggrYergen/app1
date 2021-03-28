#include "header.h"

void searchbook()
{
    char name[20];
    libros* b;

    p("Ingresa el nombre del libro: \n");
    s("%c", name);
    while (b!=NULL)
    {
        if (strncmp(b->titulo, name, 20) != 0)
        {
			p("No se encuentra el libro");
		}
		else 
		{
			p("Titulo \n");
			p("%s",b->titulo);
            p("Autor \n");
            p("%s", b->autor);
            p("Anio: \n");
            p("%s", b->anio);
            p("Edificio \n");
            p("%s", b->sede.edificio);
            p("Sede: \n");
            p("%s", b->sede.sede);
            p("Numero de estante: \n");
            p("%s", b->estante.estante_numero);
            p("Seccion del estante: \n");
            p("%s", b->estante.estante_seccion);
			
        }
    }
    
}