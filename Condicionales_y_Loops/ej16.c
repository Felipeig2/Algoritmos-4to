//Usar dos ciclos for anidados para imprimir un patrón en forma de tabla con asteriscos que indique si 𝑖 divide a
// 𝑗 o 𝑗 divide a 𝑖. Usar un argumento entero 𝑛 para el tamaño de la tabla. Ejemplos:
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    for(int i = 1; i <=n; i++){
        printf("%i", i);
    }
           
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
            if(j % i == 0 || i % j == 0){
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
    printf("%i\n", i);
    }  
}
 
/*    for(int i = 1; i <=n; i++){
        printf("%i", i);
    }
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1){
                printf("* ");
            }
            else if (i == 2) {
                printf("* ");
            }
            else{
                printf(j % i == 0 || i % j == 0 ? "* " : "  ");
            }
            
        }
       printf("%i\n",i); 
    }  
}*/