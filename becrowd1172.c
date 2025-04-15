#include<stdio.h>
int main(){
int x[10];
for(int i=0;i<10;i++){
    scanf("%d",&x[i]);
    if(x[i]<=0){
        printf("x[%d] = 1\n",i);
    }
    else{
            printf("x[%d] = %d\n",i,x[i]);}
}
return 0;
}
