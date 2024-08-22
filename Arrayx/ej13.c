#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
  char *palabra = argv[1];
  int letras = 0;
  for(int i = 0; i < strlen(palabra); i++){
    letras += 1;
  }
  printf("La palabra tiene %d letras", letras);


}
/*   Otra forma
#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;
  while (argv[1][i] != 0) i++;
  printf ("%i", i);
  return 0;
}           */