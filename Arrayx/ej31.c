#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void HacerBuscaminas(int p, int n) {
    int tablero[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((rand() % 100) < p){
                tablero[i][j] = -1;  
            } else {
                tablero[i][j] = 0;  
            }
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (tablero[i][j] == -1) continue;

            int Count = 0;

            // Comprobando los 8 vecinos con ifs
            if (i > 0 && tablero[i-1][j] == -1) 
            Count++;                
            if (i > 0 && j < n-1 && tablero[i-1][j+1] == -1) 
            Count++;   
            if (j < n-1 && tablero[i][j+1] == -1) 
            Count++;              
            if (i < n-1 && j < n-1 && tablero[i+1][j+1] == -1) 
            Count++; 
            if (i < n-1 && tablero[i+1][j] == -1) 
            Count++;              
            if (i < n-1 && j > 0 && tablero[i+1][j-1] == -1) 
            Count++;   
            if (j > 0 && tablero[i][j-1] == -1) 
            Count++;                
            if (i > 0 && j > 0 && tablero[i-1][j-1] == -1) 
            Count++;     

            tablero[i][j] = Count;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (tablero[i][j] == -1) {
                printf("-1\t");  
            } else {
                printf(" %d\t", tablero[i][j]);  
            }
        }
        printf("\n\n");
    }
}

int main(int argc, char* argv[]) {
    srand(time(NULL));

    int n = atoi(argv[1]);
    int p = atoi(argv[2]);

    HacerBuscaminas(p, n);
    return 0;
}
