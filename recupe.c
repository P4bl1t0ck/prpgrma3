#include<stdio.h>
#include<math.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float puntos[4][3];
    char componente[3]={'X','Y','Z'};
    float areas[4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           puntos[i][j]=ingreseComponente(componente[j],i);
        }    
    }
        float perimetro = calcularPerimetro(puntos);
        printf("El perimetro de la piramide es %f",perimetro);
        float areaSuperficial = calcularAreaSuperficial(puntos);
        printf("El area superficial de la piramide es %f",areaSuperficial);
        float volumen = calcularVolumen(puntos);
        printf("El area superficial de la piramide es %f",areaSuperficial);

    return 0;
}