#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int num = atoi(argv[1]);
    if (num < 0) {
    num = num * -1;
    }
    printf("El valor absoluto es %d", num);
    return 0;
}