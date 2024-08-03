#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char* argv[]){


    int num1 = atoi(argv[1]);
    srand(time(NULL));
    int num_al = rand() % num1;

    printf("EL numero aleatorio entre 0 y %d es %d\n", num1, num_al);

    return 0;

}