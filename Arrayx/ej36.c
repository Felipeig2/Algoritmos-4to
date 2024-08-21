#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main(int argc, char * argv[]){

  srand(time(NULL));
  char *alumno = argv[1];
  float nota = 0;
  float promedio = 0;
  float matriz[11][5];


  for(int i = 0; i < 5; i++){
    promedio = 0;
    for(int j = 0; j < 10; j++){
      nota = rand() % 10;
      matriz[j][i] = nota;
      printf(" %d\t", matriz[j][i]);
      promedio += nota;
      
    }
      promedio /= 10;
      matriz[10][i] = promedio;
      printf(" | Promedio = %.2f | \n\n", promedio);
      
  }
    

       if(strcmp(alumno, "Juan") == 0) {
        if(matriz[10][0] > 5){
            printf("Juan aprobó con %.2f", matriz[10][0]);
        } else {
            printf("Juan no aprobó. Se sacó %.2f", matriz[10][0]);
        }
    }
    else if(strcmp(alumno, "Carlos") == 0) {
        if(matriz[10][1] > 5){
            printf("Carlos aprobó con %.2f", matriz[10][1]);
        } else {
            printf("Carlos no aprobó. Se sacó %.2f", matriz[10][1]);
        }
    }
    else if(strcmp(alumno, "Pedro") == 0) {
        if(matriz[10][2] > 5){
            printf("Pedro aprobó con %.2f", matriz[10][2]);
        } else {
            printf("Pedro no aprobó. Se sacó %.2f", matriz[10][2]);
        }
    }
    else if(strcmp(alumno, "Felipe") == 0) {
        if(matriz[10][3] > 5){
            printf("Felipe aprobó con %.2f", matriz[10][3]);
        } else {
            printf("Felipe no aprobó. Se sacó %.2f", matriz[10][3]);
        }
    }
    else if(strcmp(alumno, "Dario") == 0) {
        if(matriz[10][4] > 5){
            printf("Dario aprobó con %.2f", matriz[10][4]);
        } else {
            printf("Dario no aprobó. Se sacó %.2f", matriz[10][4]);
        }
    }
    else {
        printf("Alumno no encontrado");
    }

  return 0;
}