#include<stdio.h>
#include<stdlib.h>

int main(void){
FILE *fp = fopen("ahorcado.txt", "r");
char array[10000];

for(int i = 0; i < 100; i++){
    fscanf(fp, "%c", array);
    
}
printf("%s", array);

printf("%c", array);

  return 0;
}

// mmattteooooo
//m2at3eo5