#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int num1 = 1 + rand() % 10;
    int num2 = 1 + rand() % 10;
    int igualdad = num1 == num2 ? 1 : 0;
    

    printf("Es %d", igualdad);

    return 0;
}

