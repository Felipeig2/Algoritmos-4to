#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {


    int n = atoi(argv[1]);
    int p = atoi(argv[2]);


    srand(time(NULL));
    int tablero[n][n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tablero[i][j] = 0;
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((rand() % 100) < p) {
                tablero[i][j] = -1;
            }
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tablero[i][j] == -1) {
                continue;
            }
            int count = 0;
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    if (di == 0 && dj == 0) continue; 
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < n &&                           tablero[ni][nj] == -1) {
                        count++;
                    }
                }
            }
            tablero[i][j] = count;
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tablero[i][j] == -1) {
                printf("-1\t"); // 
            } else {
                printf(" %d\t", tablero[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}


  /*
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((rand() % 100) < p) {
        tablero[i][j] = -1;
        printf("%d\t", tablero[i][j]);
      }
      else {
        int count = 0;
        if (tablero[i][j + 1] < 0) {
          count += 1;
        }
        if (tablero[i + 1][j + 1] < 0) {
          count += 1;
        }
        if (tablero[i - 1][j - 1] < 0) {
          count += 1;
        }
        if (tablero[i - 1][j] < 0) {
          count += 1;
        }
        if (tablero[i][j - 1] < 0) {
          count += 1;
        }
        if (tablero[i + 1][j - 1] < 0) {
          count += 1;
        }
        if (tablero[i - 1][j + 1] < 0) {
          count += 1;
        }
        if (tablero[i + 1][j] < 0) {
          count += 1;
        }
        printf(" %d\t", count);
      }
    }
    printf("\n\n");
  }
  */
 

