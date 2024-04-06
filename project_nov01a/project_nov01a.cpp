#include<stdio.h>
#include<math.h>

int teste(int num1,int num2,int num3,int pot){
    if((fmod(num1,pow(2,pot)))==0){
        if((fmod(num2,pow(2,pot)))==0){
            if((fmod(num3,pow(2,pot)))==0){
                return(1);
            }
        }
    }
    return(0);
}
int valord(int p1,int p2){
    int m=p1<0?1:0;
    p1=p1%3;
    p2=p2%3;
    if(p1==0)return(0);
    if(p1!=p2)return(m?2:1);
    if(p1==p2)return(m?1:2);
}

int main(){
    int leis_principais[6][5]=
        {7,8,3,1,2,
        9,16,3,1,4,
        11,16,3,1,2,
        1,32,3,1,4,
        17,64,3,-3,16,
        49,128,3,-3,16};
    int outras_leis[18][5];
    int a,b,c,d,e,f,g,h,i,j,ind=0;/*
    for(i=0;i<=5;i++){
        printf("%dK+%d:\(%dX%c%d\)/%d\n",
        leis_principais[i][1],
        leis_principais[i][0],
        leis_principais[i][2],
        leis_principais[i][3]<0?'\0':'+',
        leis_principais[i][3],
        leis_principais[i][4]);
    }*/
    for(i=0;i<=5;i++){
        for(j=0;j<=5;j++){
            a=leis_principais[i][1];
            b=leis_principais[i][0];
            g=leis_principais[j][1];
            h=leis_principais[j][0];
            e=leis_principais[i][3];
            f=leis_principais[i][4];
            printf("X=%d mod %d\n",b,a);
            printf("Y=%d mod %d\n",h,g);
            printf("X=%dK+%d\n",a,b);
            printf("Y=%dn+%d\n",g,h);
            printf("\(3X+%d\)/%d=Y\n",e,f);
            printf(
            "\(3\(%dK+%d\)+%d\)/%d=%dn+%\n"
            ,a,b,e,f,g,h);
            printf("%dk+%d+%d=%dn+%d\n",
            3*a,3*b,e,f*g,f*h);
            printf("%dk=%dn+%d\n",
            3*a,f*g,f*h-3*b-e);
            if((((f*g)%a)==0)
            &&(((f*h-3*b-e)%a)==0)){
                d=valord(int((f*h-3*b-e)),
                int(f*g));
                printf("3K=\(%dn+%d\)/%d\n"
                ,f*g,f*h-3*b-e,a);
                /*printf("3K=%dn+%d\n",
                int(f*g/a),
                int((f*h-3*b-e)/a));*/
                printf("n=3m+%d\n",d);
                printf("3K=\(%d\(3m+%d\)+%d\)/%d\n",f*g,d,f*h-3*b-e,a);
                printf("K=\(%dm+%d+%d\)/%d\n",3*f*g,f*g*d,f*h-3*b-e,3*a);
                printf("K=\(%dm+%d\)/%d\n",3*f*g,f*g*d+f*h-3*b-e,3*a);
                printf("X=%d\(%dm+%d\)/%d+%d\n",a,3*f*g,f*g*d+f*h-3*b-e,3*a,b);
                printf("X=\(%dm+%d\)/3+%d\n",
                3*f*g,f*g*d+f*h-3*b-e,b);
                printf("X=\(%dm+%d+%d\)/3\n",
                3*f*g,f*g*d+f*h-3*b-e,3*b);
                printf("X=\(%dm+%d\)/3\n",
                3*f*g,f*g*d+f*h-e);
                printf("X=%dm+%d\n",
                f*g,int((f*g*d+f*h-e)/3));
                outras_leis[ind][1]=f*g;
                outras_leis[ind][0]=int((f*g*d+f*h-e)/3);
                outras_leis[ind][2]=3;
                outras_leis[ind][3]=e;
                outras_leis[ind][4]=f;
                ind++;
            }else{
                c=-1;
                do{
                    c++;
                }while(
                teste(a,f*g,f*h-3*b-e,c+1));
                c=(int(pow(2,c)));
                printf(
                "3*%dK/%d=\(%dn+%d\)/%d\n",
                a,c,f*g,f*h-3*b-e,c);
                printf("%d*3k=%dn+%d\n",
                int(a/c),int(f*g/c),
                int((f*h-3*b-e)/c));
                printf("CONTRADICAO\n");
            }
            printf("\n");
         }
         printf("********\n\n");
    }
    for(i=0;i<=17;i++){
        printf("%4dK+%4d:\(%dX%c%d\)/%d\n",
        outras_leis[i][1],
        outras_leis[i][0],
        outras_leis[i][2],
        outras_leis[i][3]<0?'\0':'+',
        outras_leis[i][3],
        outras_leis[i][4]);
    }
}