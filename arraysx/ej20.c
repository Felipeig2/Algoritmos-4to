#include<stdio.h> 
#include<stdlib.h> 
int parse_int(char *w){
int i = 0;
  int resultado = 0;
  while(w[i] != 0){
    if(w[i] < 48 || w[i] > 57){
      i++;
      continue;
    }
    resultado *=10;
    w[i] -= 48;
    resultado += w[i];
    i++;
  }
  return resultado;
}
int main(int argc, char *argv[]){
int w = parse_int(argv[1]);  
printf("%d\n", w);
  return 0;
}