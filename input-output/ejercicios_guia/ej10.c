#include<stdio.h>
#include<stdlib.h>

int main(){
    int lineas = -1;
    char a;
    
printf("Escribe un codigo, y te dire cuantas lineas tiene. Frenara cuando escribas algo distinto a un enter. ");
    scanf("%c", &a);
    do{
        scanf("%c", &a);
        a = '';
    } while(a == '\n');

    printf("La cantidad de lineas totales es: %d", lineas);
    return 0;
}