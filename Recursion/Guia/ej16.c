#include<stdio.h>
#include<stdlib.h>
int power(int b, int e){
    if(e == 0) return 1;
    return power(b, e-1)*b; 
}
int main(int argc, char *argv[]){
    int b = atoi(argv[1]);
    int e = atoi(argv[2]);
    int res = power(b, e);
    printf("%d elevado a %d da: %d", b, e, res);
}