// Que pida un número del 1 al 7 y diga el día de la semana correspondiente.
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){

    int n = atoi(argv[1]);
    if (n == 1 || n == 2 ||n == 3 ||n == 4 ||n == 5 ||n == 6 ||n == 7){
        if( n == 1){
            printf("Es Lunes");
        }
                if( n == 2){
            printf("Es Martes");
        }
                if( n == 3){
            printf("Es Miercoles");
        }
                if( n == 4){
            printf("Es Jueves");
        }
                if( n == 5){
            printf("Es Viernes");
        }
                if( n == 6){
            printf("Es Sabado");
        }
                if( n == 7){
            printf("Es Domingo");
        }


    }
    else{
        printf("Es entre numeros del 1 al 7");
    }



    return 0;
}