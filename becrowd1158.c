#include<stdio.h>
int main(){
    int N,x,y;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
scanf("%d %d",&x,&y);
int count=1;
int sum=0;
for(x;count<=y;x++){

    if(x%2!=0){
        sum=sum+x;
        ++count;
    }
}
printf("%d\n",sum);
    }
return 0;}
