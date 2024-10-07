#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    char lineas[1000];

        for(int i = 0; i < 10; i++){
            if(fgets(lineas, 1000, fp) != NULL)
            printf("%s", lineas);
        }

    return 0;
}