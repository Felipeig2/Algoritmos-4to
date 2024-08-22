#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_matriz(int matriz[3][3]) {
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n\n");
  }
}

int main(void) {
  srand(time(NULL));
  int A[3][3];
  int B[3][3];
  
  int suma = 0;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      int numA = (rand() % 9) + 1;
      A[i][j] = numA;
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(i == j){
        suma += A[i][j];
      }   
    }
  }

  imprimir_matriz(A);
  printf("La suma de la diagonal principal da %d", suma);
  return 0;
}