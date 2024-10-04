#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char c;
     FILE *fp = fopen(argv[1], "r");
     while((c = getc(fp)) != EOF){
        printf("%c", c);            // con putchar se podria hacer
     }
    return 0;
}