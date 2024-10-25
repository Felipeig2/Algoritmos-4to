#include<stdio.h>
#include<stdlib.h>
int suma(int n){
    if(n < 10) return n;
    return suma(n/10)+n%10; 
}
int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int res = suma(n);
    printf("La suma de los digitos de %d da: %d", n, res);
}