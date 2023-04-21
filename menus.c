#include <stdio.h>   ///////// menu.c
#include "menus.h"
int menuProducto()
{
    int opcion1;
    printf("1. Llantas (Precio: $150)\n");
    printf("2. Kit Pastillas de freno (Precio: $55\n");
    printf("3. Kit de embrague (Precio: $180)\n");
    printf("4. Faro (Precio: $70)\n");
    printf("5. Radiador (Precio: $120)\n");
    printf("Ingrese la opcion deseada: ");
    scanf("%i", &opcion1);
    return opcion1;
}

char menuPrincipal()
{
    char opcion;
    printf("a. Facturar producto\n");
    printf("b. Imprimir factura\n");
    printf("c. Salir\n");
    printf("Ingrese la opcion deseada: ");
    scanf(" %c", &opcion);
    return opcion;
}

