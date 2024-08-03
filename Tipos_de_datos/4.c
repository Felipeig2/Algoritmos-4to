#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
bool same_numbers(int a, int b);
int a = atoi(argv[1]);
int b = atoi(argv[2]);

printf("%s\n", same_numbers(a, b) ? "verdadero" : "falso");


return 0;


}
bool same_numbers(int a, int b){
    return a == b; 
}

