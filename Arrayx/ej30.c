#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
srand(time(NULL));
int n = atoi(argv[1]);
int p = atoi(argv[2]);
int tablero[n+2][n+2];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        if((rand() % 100) < p){
            tablero[i][j] = -1;
            printf("%d\t", tablero[i][j]);
        }
        else{
            tablero[i][j] = 0;
            printf(" %d\t", tablero[i][j]);

        }
      
        }
              printf("\n\n");
    }
    printf("\n");
}