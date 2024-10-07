#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    char lineas[1000][1000];   
    int n_lineas = 0;
    while(fgets(lineas[n_lineas], 1000, fp) != NULL) {
        n_lineas++;
    }
    for(int i = 0; i < 10; i++) {
        if(n_lineas - 10 + i >= 0) { 
            printf("%s", lineas[n_lineas - 10 + i]);
        }
    }
    return 0;
}
