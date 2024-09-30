#include<stdio.h>
#include<stdlib.h>


void menu(FILE *fp, char palabraCompleta[5], char palabraCompletandose[5], int vidas){
    char letra;
    for(int i = 0; i < 5; i++){
        fscanf(fp, " %c", &letra);
        palabraCompleta[i] = letra;
        palabraCompletandose[i] = '_';  
    }
    printf("Escribe una letra, y yo te diré si es parte de la palabra que tienes que adivinar\n");
    printf("Tienes %d vidas, no las desperdicies\n", vidas); 
}

int main(void){
    
    FILE *fp = fopen("ahorcado.txt", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    char palabraCompleta[5];
    char palabraCompletandose[5];
    char letraUsuario;
    int vidas = 5;  
    int victoria = 0;

  
    menu(fp, palabraCompleta, palabraCompletandose, vidas);  

    while(vidas > 0){
        if(victoria == 1){
            victoria = 0;
            menu(fp, palabraCompleta, palabraCompletandose, vidas);  
        }

        int encontrada = 0;  

        printf("Te quedan %d vidas\n", vidas);
        printf("Ingresa una letra: ");
        scanf(" %c", &letraUsuario);

        for (int i = 0; i < 5; i++) {
            if(palabraCompleta[i] == letraUsuario){
                palabraCompletandose[i] = letraUsuario;
                encontrada = 1;
            }
        }

        system("clear");

        if (encontrada) {
            printf("Bien! La letra %c es parte de la palabra.\n", letraUsuario);
        } else {
            printf("No, no era parte de la palabra. Perdiste una vida. Inténtalo de nuevo.\n");
            vidas--;  // Reducimos vidas
        }

        printf("Palabra: %s\n", palabraCompletandose);

        if (palabraCompletandose[0] != '_' && palabraCompletandose[1] != '_' &&
            palabraCompletandose[2] != '_' && palabraCompletandose[3] != '_' &&
            palabraCompletandose[4] != '_') {
            printf("Terminaste el juego!!! La palabra completa era: %s\n", palabraCompleta);
            victoria = 1;
        }
    }

    printf("Perdiste, te quedaste sin vidas. La palabra era: %s\n", palabraCompleta);

    fclose(fp);  

    return 0;
}




































/*#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int main(void){
    FILE *fp = fopen("ahorcado.txt", "r");
    char palabra[100]; 
    int nLetras;
    char letra;
    int vidas = 5; 
    char array[] = {'.', '.', '.', '.', '.'}; 
    
    while (fscanf(fp, "%s %d", palabra, &nLetras) != EOF) {
      printf("Estas jugando al ahorcado. Tienes 5 vidas. La palabra tiene %d letras\n", nLetras);
      // getchar(); no quiero usarla
      scanf("%c", &letra); 
      
      for (int i = 0; i < strlen(palabra); i++) {
          if (palabra[i] == letra) { 
            printf("La letra numero %d es la %c\n", i + 1, letra);
            array[i] = letra; 
          } else {
            vidas--; 
            printf("No tiene %c. Perdiste una vida. Te quedan %d vidas\n", letra, vidas);
          }
      }
      printf("%s\n", array); 
    }
    fclose(fp);
    return 0;
}
*/