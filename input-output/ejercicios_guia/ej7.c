#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int n, a, b;
    srand(time(NULL));
    printf("Ingresa n, a y b numeros. Te generare n numeros aleatorios entre a y b: ");
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    
    for(int i = 0; i < n; i++){
        int num_random = a + rand() % (b - a + 1);
        printf("Numero: %d\n", num_random);
    }
}