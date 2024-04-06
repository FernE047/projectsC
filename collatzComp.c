#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LIMITE 250

int collatz(double termo,int grau){
    int passos=0;
    if(grau==0){
        while(termo!=1){
            if(fmod(termo,2)==0){
                termo/=2;
            }else{
                termo=3*termo+1;
            }
            passos++;
        }
    }else if(grau==1){
        while(termo!=1){
            if(fmod(termo,2)==0){
                termo/=2;
            }else if(fmod(termo,4)==3){
                termo=(3*termo+1)/2;
            }else if(fmod(termo,8)==1){
                termo=(3*termo+1)/4;
            }else{
                termo=(termo-1)/4;
            }
            passos++;
        }
    }
    return(passos);
}
int main(){
    double fruto;
    int passos[2],inicial=1;
    char continuar=1;
    while(continuar!='0'){
        system("cls");
        for(fruto=inicial;fruto<inicial+LIMITE;fruto++){
            passos[0]=collatz(fruto,0);
            passos[1]=collatz(fruto,1);
            printf("%3.0lf:%4d,%4d,%4d\n",fruto,passos[0],passos[1],passos[0]-passos[1]);
        }
        scanf("%c",&continuar);
        inicial+=LIMITE;
    }
}
