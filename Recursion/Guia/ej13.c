#include<stdio.h>
#include<stdlib.h>

int suma(int n){
    if(n == 0) return 0;
    return suma(n-1)+n;
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("\nLa suma de los primeros %d ", n);
    printf("numeros da %d\n", suma(n));
    return 0;
}