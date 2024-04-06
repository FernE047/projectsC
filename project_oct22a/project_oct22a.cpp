#include<stdio.h>
#define LIMITE 10000

int termina(int x){
    int quant[3]={0,0,0};
    while(1){
       if(x==1){
            printf("%2d,%2d,%2d:",quant[2],quant[1],quant[0]);
            return(1);
        }else if((x%2)==0){
            x/=2;
            quant[0]++;
        }else if((x%8)==5){
            x=(x-1)/4;
            quant[1]++;
        }else if((x%128)==113){
            x=(x-17)/32;
            quant[2]++;
        }else if((x%16)==3){
            x=(x-1)/2;
            quant[2]++;
        }else{
            printf("%2d,%2d,%2d\n",quant[2],quant[1],quant[0]);
            return(0);
        }
    }
}




int main(){
    int cont,total=0,a;
    for(cont=1;cont<=LIMITE;cont++){
        if(termina(cont)){
           // total++;
            printf("%4d\n",cont);
        }
     /*   for(a=1;a<=total;a++){
            printf("0");
        }
        printf("\n");*/
    }
}