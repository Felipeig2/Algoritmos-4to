#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dado(){

int num1 = (rand() % 6) + 1;
int num2 = (rand() % 6) + 1;
printf("El primer dado, el cual dio %i y segundo, el cual dio %i al sumarlos, nos da ", num1, num2);
 return num1 + num2 ;

}

int main(int argc, char *argv[]){

srand(time(NULL));
printf("%d", dado());

    return 0;
}