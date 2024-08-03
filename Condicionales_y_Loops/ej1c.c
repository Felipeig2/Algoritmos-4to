#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    if (a > 0) {
        printf("El numero es positivo");
    }
    if (a < 0) {
        printf("El numero es negativo");
    }
    if (a == 0) {
        printf("El numero es cero");
    }
    return 0;
}