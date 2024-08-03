// Escribir un programa que imprima los números en el intervalo del 1 al 100 que al ser divididos por una argumento
// entero "𝑛", su resto sea igual a 3 .Dibujareldiagramadeflujo.
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
int n = atoi(argv[1]);
for(int i = 1; i <= 100; i++) {
if (i % n == 3){
printf("El numero que da resto 3 si lo dividimos por %d es %d\n", n, i);
} 

}




return 0;
}



