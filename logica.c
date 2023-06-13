#include<stdio.h>
#include"logica.h"

void trapuesta(float A[4][2]){//// No se puede regresar una matriz 
 float respuesta[2][4];
 printf("Esta es su matriz traspuesta \n");

 for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
      respuesta[i][j]=A[j][i];
    }
 }
 for(int a=0;a<2;a++){
    for(int b=0;b<4;b++){
        printf(" %f ",respuesta[a][b]);
    }
    printf("\n");
}
}

void  multi(float A[4][2],float T[2][4],int I[4][4]){
    float rEs[4][4];
    float ID[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            rEs[i][j]+=A[i][j]*T[i][j];
        }
    }
   printf("Este es su matriz \n");
    for(int b=0;b<4;b++){
        for(int d=0;d<4;d++){
            ID[b][d]+=rEs[b][d]*I[b][d];
        }
    }
    printf("Esta es su matriz respuesta \n ");
    for(int l=0;l<4;l++){
        for(int k=0;k<4;k++){
            printf("%f",ID[l][k]);
        }
        printf("\n");
    }
}


