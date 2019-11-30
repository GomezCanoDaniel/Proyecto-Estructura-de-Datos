#include <stdio.h>
#include <string.h>

struct lista
{
    char nombre[20];
    char direccion[40];
    char telefono[8];
    int edad;
};

int main()
{
    struct lista listaPersona[50];
    int edadBuscar,i,opcion,j=0;
    char n;
    
    for (i=0; i<50; i++)
    {
        printf("nombre::");
        gets(listaPersona[i].nombre);
        j++;
        if (strcmp(listaPersona[i].nombre,"")==0)
            break;
        printf("edad::");
        scanf("%d",&listaPersona[i].edad);
        getchar();
        printf("direccion::");
        gets(listaPersona[i].direccion);
        printf("telefono::");
        gets(listaPersona[i].telefono);
    } 
    
    do
    {
        printf("\n");
        printf("1. Mostrar todos los nombre\n");
        printf("2. Buscar personas por edad\n");
        printf("3. Buscar personas cuya inicial se indique\n");
        printf("4. Salir\n");
        printf("\nSeleccione opcion::");
        scanf("%d",&opcion);
        switch (opcion)
        {
            case 1:
                for (i=0; i<j; i++)
                    puts(listaPersona[i].nombre);
                break;
            case 2:
                printf("ingrese edad a buscar::");
                scanf("%d",&edadBuscar);
                for (i=0; i<j; i++)
                {
                    if (listaPersona[i].edad==edadBuscar)
                        printf("%s\n",listaPersona[i].nombre);
                }
                break;
            case 3:
                printf("indique inicial del nombre para buscar::");
                n=getchar();
                getchar();
                for (i=0; i<j; i++)
                {
                    if (listaPersona[0].nombre[i]==n)
                        printf("%s\n",listaPersona[i].nombre);
                }
                break;
        }
    }
    while (opcion != 4);   
    return 0;
}
