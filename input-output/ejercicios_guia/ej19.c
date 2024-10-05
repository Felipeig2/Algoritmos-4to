#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
    srand(time(NULL));
    FILE *fp = fopen("ahorcado.txt", "r");
    char palabras[100][20];
    char letra;
    int victoria = 0;
    int tamaño =  0;
    int vidas = 5;
    char array_incorrectas[100];
    int array_indice = 0;
    for (int i = 0; i < 100; i++) {
        fscanf(fp, "%s", palabras[i]);
    }
    while (1) {
        int numero_a = rand() % 93; 
        char *palabraCompleta = palabras[numero_a];
        char palabraCompletandose[10];
        victoria = 0;
        tamaño = strlen(palabraCompleta);
        int array_indice = 0;
        char array_incorrectas[100];
        
        printf("Hey, estas jugando al ahorcado. La palabra tiene %d letras. Inténtalo!\n", tamaño);
        for (int i = 0; i < tamaño; i++) {
            palabraCompletandose[i] = '_';
        }
        while (victoria != 1) {
            int encontrada = 0;

            printf("Vidas: %d\nPalabra: %s\n", vidas, palabraCompletandose);
            scanf(" %c", &letra);
            system("clear");

            for (int i = 0; i < tamaño; i++) {
                if (letra == palabraCompleta[i]) {
                    palabraCompletandose[i] = palabraCompleta[i];
                    encontrada = 1;
                }
            }
            
            if (encontrada == 1) {
                printf("Muy bien! Has encontrado una letra: %c\n", letra);
            } else {
                printf("Nop, la letra %c no es parte de la palabra\n", letra);
                array_incorrectas[array_indice] = letra;
                array_indice++;
                vidas--;
            }

           
            int completada = 1;
            for (int i = 0; i < tamaño; i++) {
                if (palabraCompletandose[i] == '_') {
                    completada = 0;
                    break;
                }
            }

            if (completada == 1) {
                victoria = 1;
                printf("¡Felicidades! Has completado la palabra: %s\n", palabraCompletandose);
            }

            if (vidas == 0) {
                printf("Perdiste! La palabra era: %s\n", palabraCompleta);
                return 0;
            }
            if(array_indice != 0){
            printf("Las letras incorrectas:");
            for (int i = 0; i < array_indice; i++) {
            printf(" %c ", array_incorrectas[i]);
            }
            printf("\n");
            }
                    if(vidas == 4){
            printf(" o \n");
        }
        if(vidas == 3){
            printf("  o \n");
            printf("  | \n");
        }
        if(vidas == 2){
            printf("   o \n");
            printf(" --| \n");

        }
        if(vidas == 1){
            printf("   o \n");
            printf(" --|-- \n");
        }
        if(vidas == 0){
            printf("   o \n");
            printf(" --|-- \n");
            printf("  | | \n\n");

        }
        }
    }
    fclose(fp);
    return 0;
}
