#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int cifras = atoi(argv[2]);
  int contenedor;
  for (int i = 0; i <= cifras; i++) {
    int resto = n % 10;
    contenedor = resto;
    n /= 10;
  }
  printf("%d\n", contenedor);
  return 0;
}