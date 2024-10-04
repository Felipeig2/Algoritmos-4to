#include<stdio.h>
#include<stdlib.h>

void crear_matriz(char *matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int w = 0; w < 3; w++ ){
            matriz[i][w] = "[ ]";
        }
    }
}

void imprimir_matriz(char *matriz[3][3]) {
    printf("x0\tx1\tx2\n");
    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int w = 0; w < 3; w++ ){
            printf("%s\t", matriz[i][w]);
        }
        printf("y%d\n", i);
    }
}

int main(void){
    char *matriz[3][3];
    int x = 0;
    int y = 0;
    system("cls");
    printf("Elige una posicion escribiendo x,y siendo x columna, y fila\n\n");
    crear_matriz(matriz);
    imprimir_matriz(matriz);

    for(int i = 0; i < 9; i++){
        scanf("%d,%d", &x, &y);
        if(i % 2 == 0){
            matriz[y][x] = "[X]";
        }
        else{
            matriz[y][x] = "[O]";
        }
        system("cls");
        imprimir_matriz(matriz);
        for(int i = 0; i < 3; i++) {
            if(matriz[i][0] == "[X]" && matriz[i][1] == "[X]" && matriz[i][2] == "[X]" || matriz[0][i] == "[X]" && matriz[1][i] == "[X]" && matriz[2][i] == "[X]" || matriz[0][0] == "[X]" && matriz[1][1] == "[X]" && matriz[2][2] == "[X]" || matriz[0][2] == "[X]" && matriz[1][1] == "[X]" && matriz[2][0] == "[X]"){
                printf("Ha ganado el jugador X");
                return 0;
            }
            else if(matriz[i][0] == "[O]" && matriz[i][1] == "[O]" && matriz[i][2] == "[O]" || matriz[0][i] == "[O]" && matriz[1][i] == "[O]" && matriz[2][i] == "[O]" || matriz[0][0] == "[O]" && matriz[1][1] == "[O]" && matriz[2][2] == "[O]" || matriz[0][2] == "[O]" && matriz[1][1] == "[O]" && matriz[2][0] == "[O]"){
                printf("Ha ganado el jugador O");
                return 0;
            }
        }
    }
    system("cls");
    printf("\nEmpate.\n");
    return 0;
}

