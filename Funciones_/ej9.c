#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int dado1 = 1 + rand() % 6;
    int dado2 = 1 + rand() % 6;
    int suma = dado1 + dado2;
    

    printf("La suma de los dados da %d", suma);

    return 0;
}