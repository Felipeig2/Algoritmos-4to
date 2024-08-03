//1. Escribir un programa que realice la factorización de enteros en factores primos. Ejemplos:
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
for(int i = 2; i <= n; i++) {
 
 while (es_primo(i) && n % i == 0) {
        ca = n / i;
        n -= ca;
            printf("%d ", i);
        }
    }
}

/*  if (es_primo(i)) {
        ca = n / i;
        n -= ca;
            printf("%d ", i);
        }
    }*/
/*
 if( I % 2 == 0){
i += 1;
}

else{

}

return 0;
}
bool is_prime(int n){

    return true;
} */