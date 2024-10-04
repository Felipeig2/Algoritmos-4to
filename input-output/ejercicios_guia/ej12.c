#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void imprimirMenu(){
  printf("1. Imprimir un numero aleatorio\n");
  printf("2. Imprimir una letra aleatoria\n");
  printf("3. Imprimir una palabra aleatoria\n");
  printf("4. Imprimir una cuenta aleatoria\n");
  printf("5. Imprimir una clase del wow aleatoria\n");
  printf("6. Salir del programa\n");
}

void numAl(){
  int n = rand() % 100;
  printf("%d\n", n);
}

void letraAl(){
  char l = 'a' + rand() % 26;  
  printf("%c\n", l);
}

void palabraAl(){
  char *array[] = {"Mateo", "Juarez", "Juan", "Hracek"};
  int i = rand() % 4;
  printf("%s\n", array[i]);
}

void cuentaAL(){
  char *array[] = {"1*5", "23/8", "15-4", "108+34"};
  int i = rand() % 4;
  printf("%s\n", array[i]);
}

void wowAl(){
  char *array[] = {"Shaman", "Druida", "Guerrero", "Brujo"};
  int i = rand() % 4;
  printf("%s\n", array[i]);
}

void esperarParaContinuar(){
  printf("Presione Enter para continuar...");
  getchar(); // Esperar a que se presione Enter
  getchar(); // Consumir el Enter que queda en el buffer
}

int main(void){
  srand(time(NULL)); 
  
  while(1){
    int respuesta;
    system("clear");
    imprimirMenu();
    scanf("%d", &respuesta);

    switch(respuesta){
      case 1:
        numAl();
        esperarParaContinuar();
        break;

      case 2:
        letraAl();
        esperarParaContinuar();
        break;

      case 3:
        palabraAl();
        esperarParaContinuar();
        break;

      case 4:
        cuentaAL();
        esperarParaContinuar();
        break;

      case 5:
        wowAl();
        esperarParaContinuar();
        break;

      case 6:
        return 0;

      default:
        printf("No elegiste una opción válida.\n");
        esperarParaContinuar();
    }
  }

  return 0;
}
