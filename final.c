#include <stdio.h>
#include <string.h>

struct lista
{
    char nombre[20];
    char direccion[40];
    char telefono[8];
    int edad;
};


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
    
 
