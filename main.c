#include <stdio.h>

int main (int argc, char *argv[]) {

    /*Archivos calse 27/06/2023*/


    FILE *archivo;
    char nombre[50]="Luis";
     char apellido[50]="Perez";

    archivo=fopen("nombre.txt",w+);////crea archivo w

    char buffer[100];

    fgets(buffer,100,archivo); /// extra una liena entera se guarda en un arrglo de tipo char
    fputs("mensaje",archivo);//// entra cadenas
    fprintf(archivo,"%s %s",nombre,apellido); /// Para imprimir de una carpeta en especifico 
    fscanf(archivo,"%s %s",&nombre,&apellido);/// para escanear datos 

    fclose(archivo);


    return 0;
}  