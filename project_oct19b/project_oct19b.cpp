#include<stdio.h>
#include<time.h>
int main(){
    double a=1;
    int h=3;
    while(h!=0){
        a*=10;
        printf("%.0lf\n",a);
        Sleep(100);
    }
    printf("%lf",a);
}