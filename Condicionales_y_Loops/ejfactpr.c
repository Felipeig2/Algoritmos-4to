#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

bool es_primo(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
     return true;
}

int main(int argc, char* argv[]){
int n = atoi(argv[1]);
int ca = 0;
for(int i = 1000000000; i >= n; i--) {
 
 while (es_primo(i) && n % i == 0) {

            printf("%d ", i);
        }
    }
}