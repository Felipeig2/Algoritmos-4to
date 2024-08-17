/*Escribir un programa que acepte un argumento 𝑛 y genere la matriz identidad de dimensión 𝑛 × 𝑛. Usar arrays
bidimensionales.*/

#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
srand(time(NULL));
    int n = atoi(argv[1]);
    int matriz[n][n];
   
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
           matriz[n][n] = rand() % 3;
          printf("%d ", matriz[n][n]);   
        } 
        printf("\n");
    }

    return 0;
}