/*scribir un programa que declare un array de enteros de 3 × 3 y guarde en cada elemento los primeros 9 argumentos recibidos por línea de comandos.*/

#include <stdio.h>


int main(int argc, char *argv[]) {

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    int e = atoi(argv[5]);
    int f = atoi(argv[6]);
    int g = atoi(argv[7]);
    int h = atoi(argv[8]);
    int i = atoi(argv[9]);
    

    int matriz[3][3] = {
        {a, b, c},
        {d, e, f},
        {g, h, i}
    };
    printf("\n");
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
           
          printf("%d ", matriz[i][j]);   
        } 
        printf("\n\ns");
    }
printf("\n");
    return 0;
}