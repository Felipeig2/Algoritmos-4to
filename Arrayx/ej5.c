#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
    srand(time(NULL));
    int arrayx[10];
    int mayor = 0;
    int menor = 11;
    for(int i = 0; i < 10; i++){
      int num = rand() % 11;
      printf("%d\n", num);
      if(mayor < num){
        mayor = num;
      }
      if(menor > num){
        menor = num;
      }
    }
    printf("El mayor numero es %d y el menor numero es %d", mayor, menor);
    return 1;
}