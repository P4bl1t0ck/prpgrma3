#include <stdio.h>
/*Venta ejercicio de tutorias*/
void calcularPunteros(float cant,float *precioxprod,float precio,float *desc);

int main (int argc, char *argv[]) {
    char producto[3][50]={"Productos","Producto2","Producto3"};
    float precio[3]={30,40,50};
    float cant=10;
    float precioxprod,desc;
    float valor;

    calcularPunteros(cant,&precioxprod,precio[3],&desc,&valor); /// Solo manda la ubicacion de los datos
    printf("%f",precioxprod);
    printf("%f",desc);
    return 0;
}

void calcularPunteros(float cant,float *precioxprod,float precio,float *desc,float *valor){ //Hace operaciones con las ibicaciones del puntero ,manda el producto
    printf("Su cantidad de productos  es igual a : \n",cant);
    *precioxprod=cant*precio;
    *desc=*precioxprod*0.01;
    *valor=*precioxprod+*desc;
  
}

 