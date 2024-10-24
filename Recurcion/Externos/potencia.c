#include<stdio.h>
#include<stdlib.h>
int potenciacicion(int base, int potencia){
    if(potencia == 0) return 1;
    return potenciacicion(base, potencia-1)*base;
}

int main(int argc, char *argv[]){
    int base = atoi(argv[1]);
    int potencia = atoi(argv[2]);
    int resultado = potenciacicion(base, potencia);
    printf("%d elevado a %d da como resultado = %d\n", base, potencia, resultado);
    return 0;
}