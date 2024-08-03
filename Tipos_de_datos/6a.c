#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char *argv[]){
bool funcion(int a, int b);
int a = atoi(argv[1]);
int b = atoi(argv[2]);
printf("%s", funcion(a, b) ? "es divisible" : "no es divisible");
    return 0;
}
bool funcion(int a, int b){
return b % a == 0;
}