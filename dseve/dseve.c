#include<stdio.h>
int main(){
    int numero=1,menor;
    do{
        menor=30000;
        do{
            numero*=2;
        }while(numero<=15000);
        do{
            numero/=2;
            printf("%d",numero);
            if(((numero-1)%3)==0){
                printf("\t%d\n",(numero/3));
                if((numero/3)<menor){
                    menor=numero/3;
                }
            }else{
                printf("\n");
            }
        }while(numero>1);
        numero=menor;
    }while (numero!=0);
}