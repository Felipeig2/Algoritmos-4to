#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp =fopen("archivo.txt","r");
    char *name;
    int n1, n2;
    while(fscanf(fp, "%s %d %d", name, &n1, &n2) != EOF){
        printf("%s\t%d\t%d\t%.2f\n", name, n1, n2, (double)(n1+n2)/2);
    }
    fclose(fp);
    return 0;
}
/* fopen - r = read | w = write | a = append - fclose - fscanf -  */