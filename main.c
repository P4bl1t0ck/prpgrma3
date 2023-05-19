#include <stdio.h>

int main (int argc, char *argv[]) {
    int numeros[10][5];
    for(int i=0;i<10;i++){
        for (int j = 0; j<5; j++)
        {
            numeros[i][j]=i*2;
        }
        
        
    }
    for(int j=0;j<10;j++){
        for(int g=0;g<5;g++){
            int a= numeros[j][g];
        printf("%d ",a);
         
        }
        printf("\n");
    }
    return 0;
}