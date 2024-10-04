#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu(FILE *fp, char palabraCompleta[5], char palabraCompletandose[5], int vidas){
    char letra;
    char palabra[42][6];
    int num = rand() % 42;
    
    for (int i = 0; i < 42; i++) {
        fscanf(fp, " %s", palabra[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        palabraCompleta[i] = palabra[num][i];
        palabraCompletandose[i] = '_';  
    }

    
    
    printf("Escribe una letra, y yo te diré si es parte de la palabra que tienes que adivinar\n");
    printf("Tienes %d vidas, no las desperdicies\n", vidas); 
}

int main(void){
    srand(time(NULL));
    FILE *fp = fopen("ahorcado.txt", "r");


    char palabraCompleta[6];
    char palabraCompletandose[6];
    char letraUsuario;
    int vidas = 5;  
    int victoria = 0;

  
    menu(fp, palabraCompleta, palabraCompletandose, vidas);  

    while(vidas > 0){
        printf("%s\n", palabraCompleta);
        if(victoria == 1){
            victoria = 0;
            menu(fp, palabraCompleta, palabraCompletandose, vidas);  
        }
victoria = 0;
        int encontrada = 0;  
        if(encontrada == 0)
        printf("Ingresa una letra: ");
        
        printf("Te quedan %d vidas\n", vidas);
        
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
            printf("Palabra: %s\n", palabraCompletandose);
        } else {
            printf("No, no era parte de la palabra. Perdiste una vida. Inténtalo de nuevo.\n");
            vidas--;
            printf("Palabra: %s\n", palabraCompletandose);
        }
        
        

        if (palabraCompletandose[0] != '_' && palabraCompletandose[1] != '_' &&
            palabraCompletandose[2] != '_' && palabraCompletandose[3] != '_' &&
            palabraCompletandose[4] != '_') {
            printf("Bien! La palabra completa era: %s\n\n\n", palabraCompleta);
            victoria = 1;
        }
        if(vidas == 4){
            printf(" o \n");
        }
        if(vidas == 3){
            printf("  o \n");
            printf("  | \n");
        }
        if(vidas == 2){
            printf("   o \n");
            printf(" --| \n");

        }
        if(vidas == 1){
            printf("   o \n");
            printf(" --|-- \n");
        }
        if(vidas == 0){
            printf("   o \n");
            printf(" --|-- \n");
            printf("  | | \n\n");

        }
        
    }

    printf("Perdiste, te quedaste sin vidas. La palabra era: %s\n", palabraCompleta);

    fclose(fp);  

    return 0;
}



