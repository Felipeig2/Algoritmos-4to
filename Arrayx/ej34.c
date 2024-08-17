/* Escribir un programa que declare una matriz (array bidimensional) de 3 × 3 de números enteros. Los elementos
de la matriz se conocen en tiempo de compilación. Imprimir la matriz, una fila por línea separando con espacios
los elementos. */

#include <stdio.h>
int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int borde[0][3];
        printf("\n\n"); 
    for(int i = 0; i < 13 ; i++){
      printf("-");
    }
     printf("\n");
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
          printf("|", borde[3][i]);
          printf(" %d ", matriz[i][j]);   
        } 
        printf("|\n", borde[i][3]);
    }
   for(int i = 0; i < 13 ; i++){
      printf("-");
    }
    return 0;
}