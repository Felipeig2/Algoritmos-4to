#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void){
  srand(time(NULL));
  char array_palabras[50][10];
  int random = rand() % 50;
  char *palabra_completa;
  char palabra_completandose[20];
  int tamano = 0;
  char letra;
  int vidas = 5;
  


//-----------------------------------------
  FILE *fp = fopen("ahorcado.txt", "r");
  for(int i = 0; i < 50; i++){
    fscanf(fp,"%s", array_palabras[i]);
  }
//-----------------------------------------

//-----------------------------------------
  palabra_completa = array_palabras[random];
  tamano = strlen(palabra_completa);

  for(int i = 0; i < tamano; i++){
    palabra_completandose[i] = '_';
  }
//-----------------------------------------

  printf("Estas jugando al ahorcado. Ingresa una letra y yo te digo si esta en la palabra, o no. La palabra tiene %d letras.\n", tamano);
  printf("%s\n", palabra_completa);
//-----------------------------------------

  while(1){
//-----------------------------------------
    int encontrada = 0;
    printf("%s\n", palabra_completandose);
    scanf(" %c", &letra);
    system("clear");
//-----------------------------------------   
   
//-----------------------------------------
    for(int i = 0; i < tamano; i++){
      if(palabra_completa[i] == letra){
        palabra_completandose[i] = letra;
        encontrada = 1;
      }
    }
//-----------------------------------------

//-----------------------------------------
    if(encontrada == 1){
      printf("La letra %c es parte de la palabra!!! Te quedan %d vidas\n", letra, vidas);
    }

    else if(encontrada == 0){
      vidas--;
      printf("La letra %c no es parte de la palabra. Te quedan %d vidas\n", letra, vidas);
    }
//-----------------------------------------

    if (strcmp(palabra_completandose, palabra_completa) == 0) {
      printf("¡Has adivinado la palabra completa! %s\n", palabra_completa);
      return 0;
    }
    if(vidas == 0){
      printf("Perdiste, te quedaste sin vidas");
      return 0;
    }
}


}
