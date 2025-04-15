#include<stdio.h>
int main(){
int i,test_case;
scanf("%d",&test_case);
long long int m,N[60],x=0,y=1,sum;
for(i=0;i<60;i++){
    N[i]=x;
    sum=x+y;
    x=y;
    y=sum;
}
for(int j=1;j<=test_case;j++){
scanf("%d",&m);
for(i=0;i<60;i++){
    if(i==m){
        printf("Fib(%lld) = %lld\n",i,N[i]);
    }
}
}}
