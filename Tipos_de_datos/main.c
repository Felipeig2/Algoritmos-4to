#include <stdio.h>
#include <stdlib.h>
int suma(int a, int b){
    return a + b;
}
int main(int argc, char const *argv[]){
    printf("La suma de %d y %d es: %d", atoi(argv[1]), atoi(argv[2]), suma(atoi(argv[1]), atoi(argv[2])));
    return 0;
}

