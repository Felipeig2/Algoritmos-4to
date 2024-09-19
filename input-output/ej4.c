#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int suma = 0;
    while(scanf("%d", &n) != EOF){
        suma += n;
    }
    printf("\nLa suma de todos los numeros da: %d\n", suma);
    return 0;
}