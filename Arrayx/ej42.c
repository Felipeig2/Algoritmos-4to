#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_matriz(int n, int matriz[n][n]) {
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int calcular_determinante(int n, int matriz[n][n]) {
  int diag1 = 1;
  int diag2 = 1;
  int determinante;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++){
      if (i == j){
        diag1 *= matriz[i][j];
      }
      if (i + j == 2) {
        diag2 *= matriz[i][j];
      }
    }
  }
  determinante = diag1 - diag2;
  
  return determinante;
}

void crear_matriz(int n, int matriz[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int n = rand() % 10;
      matriz[i][j] = n;
    }
  }
}
 
int main(void) {
  srand(time(NULL));

  int matriz1[2][2];
  int matriz2[3][3];

  crear_matriz(2, matriz1);
  crear_matriz(3, matriz2);

  printf("\n");
  imprimir_matriz(2, matriz1);
  imprimir_matriz(3, matriz2);

  int determinante1 = calcular_determinante(2, matriz1);
  int determinante2 = calcular_determinante(3, matriz2);

  printf("La determinante de la primera matriz es: %d\n", determinante1);
  printf("La determinante de la segunda matriz es: %d\n", determinante2);
  printf("\n");
  return 0;
}