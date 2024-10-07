#include<stdio.h>
#include<stdlib.h>

  void imprimirMenu(){
    printf("Elije una opcion\n\n");
    printf("1. Ver notas\n");
    printf("2. Tomar notas\n");
    printf("3. Borrar notas\n");
    printf("4. Salir\n");
  }
  void ver_notas(){
     system("clear");
    FILE *fp = fopen("ejpipe.txt", "r");
    char caracter;
    while((fscanf(fp, "%c", &caracter)) != EOF){
      printf("%c", caracter);
    }
    printf("\n");
    fclose(fp);
  }
  void tomar_notas(){
      char cosa;
     system("clear");
    FILE *fp = fopen("ejpipe.txt", "a");
    printf("Escribe las notas que quieras. Cuando ya termines, pon un 0");
    while ((scanf(" %c", &cosa)) == 1 && cosa != '0') {
        fprintf(fp, "%c", cosa); 
    }
    fclose(fp);
  }
  void borrar_notas(){
    system("clear");
    FILE *fp = fopen("ejpipe.txt", "w");
    fclose(fp);
    printf("Notas borradas \n");
    
  }
 
   
  

int main(void){
  
  while (1){
    imprimirMenu();
    int opcion_elegida;
    scanf("%d", &opcion_elegida);
    if(opcion_elegida == 1){
      ver_notas();
    }
    if(opcion_elegida == 2){
      tomar_notas();
    }
    if(opcion_elegida == 3){
      borrar_notas();
    }
    if(opcion_elegida == 4){
    system("clear");
    printf("Adios\n");
    return 0;
     
    }
  
  }
}