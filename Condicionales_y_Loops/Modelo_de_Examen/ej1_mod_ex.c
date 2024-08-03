// Ejercicio n°1 de modelo de examen
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    int n = atoi(argv[1]);
    if (n <= 1 || n >= 10) {
        printf("Error pan, es entre 10 y 1 :v\n");
    } else {
        for (int i = 1; i <= 10; i++) {
            int resultado = n * i;
            printf("%d x %d = %d\n", n, i, resultado);
        }
    }

    return 0;
} 



