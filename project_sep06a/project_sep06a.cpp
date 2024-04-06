#include<stdio.h>

char peca[17];
short int decisao[15];
int indice=0;
int escreva;

int quantas_decisoes(int nivel){
 switch(indice){
  case 0:
   return(1);
  case 1:
   return(3);
  case 2:
  case 3:
  case 4:
  case 5:
   return(7);
  case 6:
   return(3);
  case 7:
   return(1);
  case 8:
  case 9:
  case 10:
   return(3);
  case 11:
  case 12:
  case 13:
  case 14:
   return(1);
 }
}

int looptop(){
 for(decisao[indice]=0; decisao[indice]<=quantas_decisoes(indice); decisao[indice]++){
  indice++;
  if(indice<15){
   looptop();
   indice--;
  }else{
   for(escreva=0;escreva<15;escreva++){
    printf("%d",decisao[escreva]); 
   }
   printf("\n%d\n\n",indice);
   indice--;
  }
 }
 return(0);
}

int main(){
    looptop();
}