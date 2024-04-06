#include<stdio.h>
#include<conio.h>

int main(){
    int termo=0,semente,modular,limite=100000,inicio=1,termoantigo;
    int repeticao[10]={0,0,0,0,0,0,0,0,0,0};
    char a='1';
    while(a!='0'){
        for(semente=inicio;semente<=limite;semente++){
            termoantigo=termo;
            termo=0;
            for(modular=1;modular<=semente;modular++){
                termo+=semente%modular;
                /*printf("%d",semente%modular);
                if(modular!=semente){
                    printf("+");
                }*/
            }
            /*if(termoantigo>termo){
                repeticao[0]++;
                printf("\n%d:-\n",semente);
            }else if(termoantigo<termo){
                repeticao[1]++;
                printf("\n%d:+\n",semente);
            }else{
                repeticao[2]++;
                printf("\n%d:%=\n",semente);
            }*/
            /*printf("\n%d:%d\n",semente,termo);
            repeticao[(termo%10)]++;*/
        }
        a=getch();
        inicio=limite+1;
        limite+=40;
    }
    for(semente=0;semente<=9;semente++){
        printf("%d:%d\n",semente,repeticao[semente]); //0 diminui 1 aumenta 2 igual
    }
}
