#include<stdio.h>
#include"logica.h"

int main (int argc, char *argv[]) {

    float A[4][2]={{3,-7},{1.4,9},{7.8,-3.2},{8,0}};
    int I[4][4]={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
      float respuesta[2][4];

    float T[2][4];


    trapuesta(A);
    multi(A,T,I);
 
    
 return 0;
}
