#include<stdio.h>
#include<math.h>
#define n 2
#define m 2


void calculo(int matriz[n][m],int suma[n][m]){
	
	
for(int i=0;i<n;i++){
     	for(int j=0;j<m;j++){
     		suma[i][j]=matriz[0][i]*matriz[1][j]/*+matriz[i][0]*matriz[i][j]*/;////pero porque no funcionaaaa
		 }
		 /*printf("\n");*/
	 }
	 printf("El valor de \n ");
	 
for(int c=0;c<n;c++){
	 	for(int f=0;f<m;f++){
	 	   printf(" #{%d  %d} : %d ",c,f,suma[c][f]);
		 }
		 printf("\n");
	 }
	
}


int main(void){
int matriz[n][m]= {{2,3},{4,2}};
int suma[n][m];
int i,j;

    calculo(matriz,suma);
    
	return 0;
}
 /*for(int i=0;i<2;i++ ){
    	for(int j=0;j<3;j++){
    		respuestas[i]=numeros[0][i]+numeros[1][i];	
		}
	}*/ 