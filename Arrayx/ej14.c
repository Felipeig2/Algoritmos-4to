/* Escribir un programa que reciba un string como argumento y cuente cuantas veces aparece cada letra en la
cadena. Ignorar digitos o signos de puntuacion.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int cargc, char *argv[]){
  char *palabra = argv[1];
  int i = 0;  
  int numero = 0;

  while ( palabra[i] != 0) {
    int n = 0;
  for(int j = 0; j < 26; j++){
   if (palabra[i] == 'a' + numero){
    n++;
    numero = 0;
   }
       
  }


  printf("Aparecio la letra %c %d veces\n", palabra[i], n);
 i++;
}

  return 0;
}