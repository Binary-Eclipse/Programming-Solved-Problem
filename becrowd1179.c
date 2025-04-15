#include<stdio.h>
int main(){
int x,i,j=0,k=0,l=0,m=0;
for(i=1;i<=15;i++){
    scanf("%d",x);
    if(x%2==0){
        printf("par[%d] = %d\n",j,x);
        j++;
if(j==4){
    if(x%2!=0){
        printf("impar[%d] = %d\n",j,x);
        l++;
    }
}

    }

    }


