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
}