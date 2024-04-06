#include<stdio.h>
#include<math.h>
int main(){
    double semente=1,termo,a;
    while(semente!=0){
        termo=semente;
        if(fmod(termo,2)){
            for(a=1;a<=9;a++){
                termo*=4;
                termo++;
            }
            for(a=1;a<=10;a++){
                printf("%.0lf",termo);
                if(fmod(termo,6)==1){
                    printf("<%.0lf",(4*termo-1)/3);
                }else if(fmod(termo,6)==5){
                    printf("<%.0lf",(2*termo-1)/3);
                }
                printf("\nV\n");
                if(termo!=semente){
                    termo=(termo-1)/4;
                }
            }
        }else{
            for(a=1;a<=9;a++){
                termo*=2;
            }
            for(a=1;a<=10;a++){
                printf("%.0lf\nV\n",termo);
                if(termo!=semente){
                    termo/=2;
                }
            }
        }
        if(fmod(semente,2)==0){
            printf("%.0lf\n",termo/2);
        }else if(fmod(semente,4)==3){
            printf("%.0lf\n",(3*termo+1)/2);
        }else if(fmod(semente,8)==1){
            printf("%.0lf\n",(3*termo+1)/4);
        }else{
            printf("%.0lf\n",(termo-1)/4);
        }
        scanf("%lf",&semente);
    }
}
