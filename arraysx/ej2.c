#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int arrayx[n];

    for(int i = 0; i < n; i++){
        arrayx[i] = i + 1;
        printf("%d\n", arrayx[i]);
    }
    return 1;
}