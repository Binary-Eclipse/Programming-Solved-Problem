#include<stdio.h>
int main(){
int i,j,n,x;
scanf("%d",&n);
for(i=1;i<=n;i++){
        int count=0;
scanf("%d",&x);
    for(j=1;j<x;j++){
        if(x%j==0){
            count++;
        }
    }
    if(count<=1){printf("%d eh primo\n",x);}
    else{printf("%d nao eh primo\n",x);}
}
return 0;
}
