#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  for (int columna = 1; columna <= n; columna++) {
    for (int fila = 1; fila <= n; fila++) {
      printf("%s ", fila % 2 != (columna % 2 == 0 ? 1 : 0) ? '*' : ' ');
    }
    printf("\n");
  }
}