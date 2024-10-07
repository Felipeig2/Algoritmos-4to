#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    char caracter;
    char todo_el_archivo[10000];

    for(int i = 0; fscanf(fp, "%c", &caracter) != EOF; i++){
        todo_el_archivo[i] = caracter;
    }
    printf("%s", todo_el_archivo);
}

/*
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char c;
     FILE *fp = fopen(argv[1], "r");
     while((c = getc(fp)) != EOF){
        printf("%c", c);            // con putchar se podria hacer
     }
    return 0;
}*/