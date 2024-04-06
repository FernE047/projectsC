#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,d=0,e=0,f=1;
    char r;
    while(1){
        do{
            system("cls");
            printf("modo 1:so exemplos\nmodo 2:com respostas\nmodo 0:SAIR\n");
            scanf("%d",&c);
        }while(!((c>=0)&&(c<=2)));
        if(c==0)break;
        scanf("%d",&a);
        if(a==0)break;
        scanf("%d",&b);
        if(b==0)break;
        if(c==2){
            scanf("%d",&d);
            if(d==0)break;
            scanf("%d",&e);
            if(e==0)break;
            scanf("%d",&f);
            if(f==0)break;
        }
        for(c=0;c<=10;c++){
            printf("%5d:%5d\n",a*c+b,(d*(a*c+b)+e)/f);
        }
        system("pause");
    }
}
