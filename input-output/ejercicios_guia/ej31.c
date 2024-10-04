#include<stdio.h>
#include<stdlib.h>

int main(void){

FILE *fp = fopen("ej31.txt", "r");

char archivo[1000];
for(int i = 0; i < 1000; i++){
  if(fscanf(fp, "%c", &archivo[i]) == EOF){
    archivo[i] = '\0';
    break;
  }
}
  printf("%s\n\n", archivo);

  for(int i = 0; i < 1000 && archivo[i] != '\0'; i++){
  int n_letras = 1;
  while(archivo[i] == archivo[i+1]) {
    n_letras++;
    i++;
  } 
    if(n_letras == 1){
      printf("%c", archivo[i]);
    }
    else{
      printf("%c%d", archivo[i], n_letras);
    }
  }
  fclose(fp);
return 0;
}