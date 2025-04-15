#include<stdio.h>
int main(){
int i=0,j=1,sum=0,n;
scanf("%d",&n);
for(int count=1;count<=n;count++){
    i=j;
    j=sum;
    if(count==n){
        printf("%d\n",j);
    }
    else{
    printf("%d ",j);}
    sum=i+j;
}
return 0;
}









