#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
    srand(time(NULL));
    int arrayx[100];
    float promedio = 0;
    int total = 0;
    int num = 0;
    for(int i = 0; i < 100; i++){
        num = rand() % 101;
        arrayx[i] = num;
        total += arrayx[i];
    }
    promedio = total / 100.0;
    printf("La suma total da %d Y el promedio es %.2f\n", total, promedio);
    return 1;
}