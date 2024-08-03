#include <stdio.h>
#include <stdlib.h>
// Hola
int main(int argc, char *argv[]){
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);
if (a > b && a > c) {
    printf("El numero mas grande es %d", a);
}
if (b > a && b > c) {
    printf("El numero mas grande es %d", b);
}
if (c > b && c > a) {
    printf("El numero mas grande es %d", c);
}
    return 0;
}