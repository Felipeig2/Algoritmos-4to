// Un programa que decida si un numero "n" es par o impar
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool es_par(int n);
int main(int argc, char* argv[]){

    int n = atoi(argv[1]);

printf("%s\n", es_par(n) ? "Es par" : "Es impar");

    return 0;
}
bool es_par(int n){

    if (n % 2 == 0) {
        return true; 
    } else {
        return false; 
}
}

