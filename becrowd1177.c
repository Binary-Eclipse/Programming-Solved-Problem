#include<stdio.h>
int main(){
int T,N[1000];
scanf("%d",&T);
int x=0,count=0;
for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,x);
        count++;
if(count==T){
    x=0;
    count=0;
}
else{
    ++x;
}
}
return 0;
}
