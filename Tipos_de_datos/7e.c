#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran_num(int min, int max){
    return (rand() % (max - min)) + min;
}

int main(int argc, char const *argv[]){
    srand(time(NULL));
    printf("%i\n", ran_num(atoi(argv[1]), atoi(argv[2])));
    return 0;
}