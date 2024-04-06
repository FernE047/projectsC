#include<stdio.h>
#include<conio.h>
#define LIMITE 80
int main(){
    int termo;
    char a='1';
    for(termo=1;termo<=LIMITE;termo++){
        printf("%d",termo%10);
    }
    for(termo=1;termo<=LIMITE;termo++){
        if(termo%10){
           printf(" ");
        }else{
           printf("%d",termo/10);
        }
    }
    a=getch();
}
