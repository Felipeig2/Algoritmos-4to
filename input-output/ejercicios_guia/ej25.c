#include<stdio.h>
#include<stdlib.h>

int main(void){

  FILE *fp = fopen("ej25.txt", "r");
  char caracter;
  while((fscanf(fp, "%c", &caracter)) != EOF){
    if(caracter == ','){
      printf(" ");
    }
    else{
      printf("%c", caracter);
    }
  }
  return 0;
}