#include <stdio.h>

int main(){
    char operacao[100],negacao=0;
    char nova_operacao[100];
    int a,b=0;
    for(a=0;a<=99;a++)
    {
        operacao[a]=0;
        nova_operacao[a]=0;
    }
    printf("digite um circuito digital\n");
 //   scanf("%s",operacao);
    operacao="a+b*c\0";
    for(a=0;a<=99;a++)
    {
        if(negacao){
            negacao=0;
            b--;
        }else{
            if((operacao[a]=='~')
            &&(operacao[(a+1)]>=60)
            &&(operacao[(a+1)]<=63)){
                negacao=1;
                nova_operacao[b]=
                (operacao[(a+1)]-59)*2+1;
            }else{
                switch(operacao[a]){
                    case '(':
                        nova_operacao[b]=11;
                        break;
                    case ')':
                        nova_operacao[b]=12;
                        break;
                    case '+':
                        nova_operacao[b]=13;
                        break;
                    case '*':
                        nova_operacao[b]=14;
                        break;
                    case '~':
                        nova_operacao[b]=15;
                        break;
                    default:
                        nova_operacao[b]=
                        (operacao[a]-59)*2;
                }
            }
            b++;
        }
        printf("op[%d]=%d\nnop[%d]=%d\nnegacao=%d\n\n", a,operacao[a],b,nova_operacao,negacao);
    }
    for(a=0;a<=99;a++)
    {
        operacao[a]=nova_operacao[a];
        printf("%d",operacao[a]);
    }
}