#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
    FILE *fp =fopen("out.txt","w");
    srand(time(NULL));
    int n = atoi(argv[1]);
    char letra_mayuscula;
    char *palabras[] = {
        "Orco", "Elfo", "Enano", "Humano", "Troll",
        "Dragón", "Mago", "Guerrero", "Pícaro", "Sacerdote",
        "Chamán", "Cazador", "Hechizo", "Aguijón", "Rugido",
        "Banda", "Mazmorras", "JcJ", "JcE", "Aventuras",
        "Horda", "Alianza", "Trono", "Sangre", "Selva",
        "Terra", "Cataclismo", "Pandaria", "Argus", "Nexus",
        "Azeroth", "Sombra", "Muerte", "Épico", "Legendario",
        "Talento", "PvP", "Raid", "Montura", "Cueva",
        "Item", "Loot", "Recompensa", "Quests", "Forja",
        "Poder", "Gremio", "Alquimia", "Encantamiento", "Cazador",
        "Golem", "Espada", "Armadura", "Hechicero", "Bárbaro"
        };
     
    for(int i = 0; i < n; i++){
        for(int i = 0; i < 10; i++){
        int random = rand() % 51;
        fprintf(fp, "%s ", palabras[random]);
        }
        fprintf(fp, ".\n");
    }
}