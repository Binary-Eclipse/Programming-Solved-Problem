#include<stdio.h>
int main(){
int sum,n,x;
scanf("%d",&x);
for(int j=1;j<=x;j++){
scanf("%d",&n);
sum=0;
for(int i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    } }
if(sum==n){
    printf("%d eh perfeito\n",n);
}
else{printf("%d nao eh perfeito\n",n);}
 }
return 0;
}
