/*. Escribir un programa que declare el array de enteros 1, 2, 3, 4, 5, 6 e invierta el orden del mismo. Luego imprimirlo.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int *num, int size){       
int a = 0;

for(int i = 0; i < size / 2; i++){
  int temp = num[5-i];
  num[5-i] = num[0+i];
  num[0+i] = temp;
}
for(int i = 0; i < size; i++){
  printf("%d ", num[i]);
}
}

int main(int argc, char *argv[]){
int num[] = {1, 2, 3, 4, 5, 6};
int size = 6;
 printf("\n");
for(int i = 0; i < size; i++){
  printf("%d ", num[i]);
}
 printf("\n");
swap(num, size);
 printf("\n");

return 0;
}