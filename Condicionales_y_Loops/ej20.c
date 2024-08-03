//. Escribir un programa que acepte un argumento entero 𝑛 y use dos loops anidados para imprimir un patrón como
//el de un tablero de ajedrez usando asteriscos y espacios en la terminal. El argumento 𝑛 es la cantidad de filas y
//columnas del tablero.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  for (int columna = 1; columna <= n; columna++) {
    for (int fila = 1; fila <= n; fila++) {
      printf("%c ", fila % 2 != (columna % 2 == 0 ? 1 : 0) ? '*' : ' ');
    }
    printf("\n");
  }
}
