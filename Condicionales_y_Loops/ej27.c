//  Escribir un programa que acepte un argumento entero 𝑛 e imprima las potencias positivas de dos hasta 2𝑛, una
// por línea. Dibujar el diagrama de flujo.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char* argv[]){
int n = atoi(argv[1]);

for( int i = 0; i <= n; i++){
int num = i * 2;
printf("2^%d da %d\n", i, num);
}
return 0;
}