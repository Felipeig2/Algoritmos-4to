#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

FILE *fp = fopen(argv[1], "r");
char c;
int array_numeros[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 while((c = getc(fp)) != EOF){
        if(c >= '0' && c <= '9'){ 
            array_numeros[c - '0']++; 
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d:\t", i);
        for(int w = 0; w < array_numeros[i]; w++){
        printf("_ ");
      }
      printf("\n");
    }
    
      return 0;
    }