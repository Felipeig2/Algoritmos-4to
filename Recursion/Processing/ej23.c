#include <stdio.h>
#include <stdlib.h>

void imprimirArray(char array[], int i) {
    if (array[i] == 0) return; 
    printf("%c ", array[i]); 
    imprimirArray(array, i + 1);
}

int main(int argc, char *argv[]) {
    char array[] = {'1', '2', '3', '4', '5'};
    int i = 0;
    imprimirArray(array, i);
    return 0;
}
