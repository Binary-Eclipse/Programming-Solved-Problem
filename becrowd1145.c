#include<stdio.h>
int main(){
int n,l;
scanf("%d %d",&n,&l);
int count=0;
for(int i=1;i<=l;i++){
        count++;
    if(count==n){
        printf("%d",i);
    }
    else{
    printf("%d ",i);}

   if(count==n){
        printf("\n");
        count=0;
    }
}
return 0;
}
