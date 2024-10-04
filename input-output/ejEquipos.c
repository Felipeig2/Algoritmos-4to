#include<stdio.h>
#include<stdlib.h>

int main(void){
    char linea[50];
    char equipos[15];
    int partidos_jugados = 0;
    int partidos_ganados = 0;
    int partidos_empatados = 0;
    int partidos_perdidos = 0;
    FILE *fp = fopen("partidos.txt", "r");

    for(int i = 0; i < 5; i++){
        fscanf(fp, "%d,%d,%d,%d,%s", &partidos_jugados, &partidos_ganados, &partidos_empatados, &partidos_perdidos, equipos);
        printf("%d %d %d %d %s\n", partidos_jugados, partidos_ganados, partidos_empatados, partidos_perdidos, equipos);
    }

    return 0;
}

/*
    for(int i = 0; i < 5; i++){
            fscanf(fp,"%s", linea);
            for(int i = 0; i < 50; i++){
                if(linea[i] == ',' || linea[i] == 'G' ){
                    break;
                }
                if()
                printf("%c", linea[i]);

            }
            printf("\n");
    }

   
*/