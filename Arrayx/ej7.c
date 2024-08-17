#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
  int arrayx[] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40};
  int numero = 0;
  for(int i = 19; i >= 0 ; i--){
    numero = arrayx[i];
    printf("%d ", numero);
  }
  printf("\n");
    return 0;
}