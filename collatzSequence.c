#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int collatz(double termo,int grau){
    int passos=0;
    if(grau==0){
        printf("\ncollatz nivel 0:\n\n");
        while(termo!=1){
            printf("%.0lf\n",termo);
            if(fmod(termo,2)==0){
                termo/=2;
            }else{
                termo=3*termo+1;
            }
            passos++;
        }
    }else if(grau==1){
        printf("\ncollatz nivel 1:\n\n");
        while(termo!=1){
            printf("%.0lf\n",termo);
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
    printf("%.0lf\n",termo);
    return(passos);
}
int main(){
    double fruto=1;
    int passos[2];
    while(fruto!=0){
        system("cls");
        passos[0]=collatz(fruto,0);
        passos[1]=collatz(fruto,1);
        printf("passos:%4d,%4d,%4d\n",passos[0],passos[1],passos[0]-passos[1]);
        scanf("%lf",&fruto);
    }
}
