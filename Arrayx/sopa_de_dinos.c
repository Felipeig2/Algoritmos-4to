#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char matriz[20][20];

void armarMatriz() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (matriz[i][j] == ' ') {
                char letra = 'a' + rand() % 26; // Incluye 'z'
                printf(" %c ", letra);
            } else {
                printf(" %c ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

void ponerLaPalabra(char *dinoElegido) {
    int numero = rand() % 2; 

    int num_random1, num_random2;

    if (numero == 1) { 
        num_random1 = rand() % 20;
        num_random2 = rand() % (20 - strlen(dinoElegido));

        for (int i = 0; i < strlen(dinoElegido); i++) {
            matriz[num_random1][num_random2 + i] = dinoElegido[i];
        }
    } else { 
        num_random1 = rand() % (20 - strlen(dinoElegido));
        num_random2 = rand() % 20;

        for (int i = 0; i < strlen(dinoElegido); i++) {
            matriz[num_random1 + i][num_random2] = dinoElegido[i];
        }
    }
}

void Calculos(char *dino1, char *dino2) {

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            matriz[i][j] = ' ';
        }
    }

    ponerLaPalabra(dino1);
    ponerLaPalabra(dino2);

    armarMatriz();
}

void elegirDino() {
    char *arrayDinos[] = { "TREX", "RAPTOR", "TRICERATOPS", "DIPLODOCO" };
    int num1 = rand() % 4;
    int num2;

    do {
        num2 = rand() % 4;
    } while (num1 == num2);

    char *dino1 = arrayDinos[num1];
    char *dino2 = arrayDinos[num2];

    Calculos(dino1, dino2);
}

int main() {
    srand(time(NULL));
    elegirDino();
    return 0;
}