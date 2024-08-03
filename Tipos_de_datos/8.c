#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dado(){
int num = (rand() % 8) + 1;
 return num > 6 ? 6 : num;

}

int main(int argc, char *argv[]){
srand(time(NULL));
printf("Tu numero aleatorio del dado es %d", dado());

    return 0;
}