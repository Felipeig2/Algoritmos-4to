#include<stdio.h>
#include<stdlib.h>

int main(void){
    char equipos[15];
    int partidos_jugados = 0;
    int partidos_ganados = 0;
    int partidos_empatados = 0;
    int partidos_perdidos = 0;
    int puntos = 0;
    FILE *fp = fopen("partidos.txt", "r");

    for(int i = 0; i < 4; i++){
        fscanf(fp, "%d,%d,%d,%d,%s", &partidos_jugados, &partidos_ganados, &partidos_empatados, &partidos_perdidos, equipos);
        puntos = partidos_ganados * 3 + partidos_empatados * 1;
        printf("\n%s\t%d\t%d\t%d\t%d\t%d\n", equipos, partidos_jugados, partidos_ganados, partidos_empatados, partidos_perdidos, puntos);
    }

    return 0;
}
