#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  FILE *fp1 = fopen(argv[1], "r");
  FILE *fp2 = fopen("ej27.txt", "w");
  int desplazamiento = atoi(argv[2]);
  char c;
  while((c = getc(fp1)) != EOF){
    if(c == '\n' || c == '\t' || c == ' '){
      fprintf(fp2, "%c", c);
    }
    else{
      c += desplazamiento;
      fprintf(fp2, "%c", c);
    }
  }
  return 0;
}