#include<stdio.h>
#include<stdlib.h>

int invertirdigitos(int a, int suma){
    if(a == 0) return suma;
    return invertirdigitos(a/10, suma * 10 + (a % 10)) ;
}

int main(int argc, char *argv[]){
    int a = 0;
    int suma = 0;
    printf("Ingresa un numero e invertire el valor del mismo: ");
    scanf("%d", &a);
    int digitos_invertidos = invertirdigitos(a, suma);
    printf("El numero %d invertido es: %d\n", a, digitos_invertidos);
}

