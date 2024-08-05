#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    srand(time(NULL));
    int arrayx[n];

    for(int i = 0; i < n; i++){
        int num_aleatorio = rand() % m;
        arrayx[i] = num_aleatorio;
        printf("%d\n", arrayx[i]);
    }
    return 1;
}