#include<stdio.h>
#include<stdlib.h>

int main(void){
    char letra;
    int numero;
    while(scanf("%c", &letra) != EOF){
        if(scanf("%d", &numero) == 1){  
            for(int i = 0; i < numero; i++){
                printf("%c", letra);    
            }
        } else {
            printf("%c", letra);       
        }
    }
    return 0;
}
