#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp1 = fopen(argv[1], "r");
    char caracter;
    int lineas = 1;

    for(int i = 0; fscanf(fp1, "%c", &caracter) != EOF; i++){
        if(caracter == '\n'){
            lineas++;
        }
    }
    printf("El programa tiene %d lineas\n", lineas);
}

/*#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    int lineas = 1;
    char c;

     while((c = getc(fp)) != EOF){
        printf("%c", c);            
     }

    printf("El programa tiene %d lineas", lineas);
    return 0;
}*/