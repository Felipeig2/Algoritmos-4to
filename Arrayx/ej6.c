#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
  int arrayx[] = {1, 2, 3, 4, 5, 6};
  int numero = 0;
  for(int i = 5; i >= 0; i--){
    numero = arrayx[i];
    printf("%d\n", numero);
  }
    return 1;
}