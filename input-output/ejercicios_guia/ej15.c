#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    int lineas = 1;
    char c;

     while((c = getc(fp)) != EOF){
        printf("%c", c);            // con putchar se podria hacer
     }

    printf("El programa tiene %d lineas", lineas);
    return 0;
}