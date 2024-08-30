#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palabra[100], num;
    int letras = 0;
    printf("Ingresa una palabra y te dire cuantos caracteres tiene: ");
    scanf("%s", &palabra);
    
    int longitud = strlen(palabra);
    for(int i = 0; i < longitud; i++){
        letras++;
    }
     printf("La palabra %s tiene %d letras\n", palabra, letras);
    return 0;
}