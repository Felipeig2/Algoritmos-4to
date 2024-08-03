#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función que devuelve un número entero aleatorio en el intervalo [a, b)
int randomInRange(int a, int b) {
    return rand() % (b - a);
}

int main(int argc, char *argv[]) {
    // Inicializar la semilla del generador de números aleatorios
    srand(time(NULL));

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    // Obtener un número aleatorio en el intervalo [a, b)
    int randomValue = randomInRange(a, b);

    // Imprimir el número aleatorio
    printf("Número aleatorio en el intervalo [%d, %d): %d\n", a, b, randomValue);

    return 0;
}
