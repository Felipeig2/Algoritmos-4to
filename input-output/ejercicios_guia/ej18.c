#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "r");
    int letras = 0;
    int palabras = 0;
    int lineas = 1;
    char caracter;
  
    int i = 0;
    
    
    while(fscanf(fp, "%c", &caracter) != EOF){
        if(caracter != '\t' && caracter != ' ' && caracter != '\n'){
            letras++;
        }
        else if (caracter == '\n'){
            lineas++;
        }
        
    }
    fclose(fp);
 
    printf("Cantidad de letras: %d\n", letras);
    printf("Cantidad de lineas: %d\n", lineas);
    
    return 0;
}