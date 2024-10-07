#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp1 = fopen(argv[1], "r");
    FILE *fp2 = fopen(argv[2], "a");
    char caracter;
    char todo_el_archivo[10000];

    for(int i = 0; fscanf(fp1, "%c", &caracter) != EOF; i++){
        todo_el_archivo[i] = caracter;
    }
    fprintf(fp2, "%s", todo_el_archivo);
}

/*
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    char c;
    FILE *fp1 = fopen(argv[1], "r");
    FILE *fp2 = fopen(argv[2], "w");

    while((c = getc(fp1)) != EOF){
        putc(c, fp2);
    }

    return 0;
}*/