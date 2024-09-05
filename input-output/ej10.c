#include <stdio.h>
#include <stdlib.h>

    int main() {
        char enter;
        int i = -1;
    do{
        scanf("%c", &enter);
        i++;
    }
    while(enter == '\n');
        printf("La cantidad de lineas totales es: %i", i);
    
        return 0;   
    }