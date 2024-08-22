#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char matriz[20][20];

void armarMatriz(){
    // Definir el arreglo de cadenas
    const char *dino[] = {" T  r  e  x  ", "Raptor", "Spino"};
    int n1, n2;
    n1 = 7;
    n2 = 8;


    strncpy(matriz[n1] + n2, dino[0], strlen(dino[0]));

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
          
      }
    }
void dino(){
    armarMatriz();
}

int main(){
    srand(time(NULL));
    dino();
    return 0;
}
