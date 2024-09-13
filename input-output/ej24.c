#include<stdio.h>
#include<stdlib.h>

void presskey(){
    puts("Presione enter para continuar");
    getchar();
}

void printmenu(){
    puts("1) Nueva nota");
    puts("2) Ver notas");
    puts("3) Borrar notas");
    puts("4) Salir");
}

void get_notes(){
    FILE *fp = fopen("notas.txt", "r");
    char line[100];
    while(fgets(line, 100, fp) != NULL)
        printf("%s", line);
        fclose(fp);
        presskey();
    
}
void add_note(){
    FILE *fp = fopen("notas.txt", "a");
    char nota[100];
    fgets(nota, 100, stdin);
    fprintf(fp, "%s", nota);
    fclose(fp);
    presskey();
}
void delete_notes(){
    FILE *fp = fopen("notas.txt", "w");
    fclose(fp);
    presskey();
}

int main(void){
   while(1){
    int choise;
    system("clear");
    printmenu();
    scanf("%d", &choise);
    getchar();
    switch(choise){

        case 1:
        add_note();
        break;
    
        case 2:
        get_notes();
        break;
        case 3:
        delete_notes();
        break;
        case 4:
            return 0;
        default:
        puts("Opcion incorrecta");
        presskey();
        }
    }
}