#include<stdio.h>

int main(){
    int escolhas=1;
    float resultado,numero1,numero2;
    while(escolhas!=0){		//repete o programa calculadora at� o usuario digitar 0 no menu de escolhas
        printf("escolha uma opcao\n1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\n0-sair\n\n"); //disp�e um menu de escolhas
        scanf("%d",&escolhas);	//l� a escolha do usuario
        if((escolhas>=1)&&(escolhas<=4)){ 	//v� se a escolha � uma das disponiveis que n�o seja 0 ou outro n�mero
            printf("digite o primeiro numero\n");	//entrada do usuario
            scanf("%f",&numero1);
            printf("digite o segundo numero\n");
            scanf("%f",&numero2);
            switch(escolhas){				//faz o calculo do resultado de acordo com a escolha do usuario
                case 1:						//caso 1: soma; caso 2: subtra��o e assim por diante
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
            printf("o resultado e: %f\n\n",resultado);	//apresenta o resultado
        }else if((escolhas<0)||(escolhas>4)){			//caso a escolha seja um n�mero que n�o esteja no menu como um n�mero negativo ou maior que 4, ele diz que o comando n�o existe
            printf("nao existe esse comando\n\n");
        }else{											//caso o usuario digite o 0, o programa se despede do usario
            printf("obrigado por utilizar nossa calculadora");
        }
    }
}
