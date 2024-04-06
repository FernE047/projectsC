#include<stdio.h>
int main(){
    FILE *arq=fopen("detonado.txt","r");
    char pou[70];
    fscanf(arq,"%s",&pou);
    printf(pou);
    fclose(arq);
}