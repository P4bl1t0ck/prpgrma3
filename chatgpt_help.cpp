#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void sumarMatrices(int matriz1[FILAS][COLUMNAS], int matriz2[FILAS][COLUMNAS], int matrizResultado[FILAS][COLUMNAS]) {
    int i, j;

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int matriz1[FILAS][COLUMNAS] = {{1, 2, 3},
                                    {4, 5, 6},
                                    {7, 8, 9}};

    int matriz2[FILAS][COLUMNAS] = {{10, 11, 12},
                                    {13, 14, 15},
                                    {16, 17, 18}};

    int matrizResultado[FILAS][COLUMNAS];

    sumarMatrices(matriz1, matriz2, matrizResultado);

    printf("Matriz Resultado:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
