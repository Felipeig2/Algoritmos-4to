// Escribir un programa que acepte un argumento entero 𝑛 e imprima los números de 1 hasta 𝑛 y su cuadrado
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int n = atoi(argv[1]);
    printf("Imprime los cuadrados del 0 al %d\n", n - 1);
    for(int i = 0; i < n; i++){
    
    int cuadrado = i * i;
    printf("%d -> %d\n", i, cuadrado);

    }
    return 0;
}