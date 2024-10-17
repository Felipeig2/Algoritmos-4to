#include <stdio.h>
#include <stdlib.h>
int main(){
   printf("%d\n", dadito());
    return 0;
}
int dadito(){
    srand(time(NULL));
    int dado = (rand() % 8) + 1;
    return dado > 5 ? 6 : dado; 
}