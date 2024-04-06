#include<stdio.h>

int main(){
    int escolhas=1;
    float resultado,numero1,numero2;
    while(escolhas!=0){
        printf("qual conta voce deseja fazer?\n1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\n0-sair\n\n");
        scanf("%d",&escolhas);
        if((escolhas>=1)&&(escolhas<=4)){
            printf("digite o primeiro numero\n");
            scanf("%f",&numero1);
            printf("digite o segundo numero\n");
            scanf("%f",&numero2);
            switch(escolhas){
                case 1:
                     resultado=numero1+numero2;
                    break;
                case 2:
                    resultado=numero1-numero2;
                    break;
                case 3:
                    resultado=numero1*numero2;
                    break;
                case 4:
                    resultado=numero1/numero2;
                    break;
            }
        }else if((escolhas<0)||(escolhas>4)){
            printf("nao existe esse comando\n\n");
        }else{
            printf("obrigado por utilizar nossa calculadora");
        }
    }
}