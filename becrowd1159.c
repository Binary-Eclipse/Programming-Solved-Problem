#include<stdio.h>
int main(){
    int x;
while(1){
    scanf("%d",&x);
    if(x==0){
        break;
    }
    else{
            int sum=0;
    int count=1;
        for(x;count<=5;x++){
            if(x%2==0){
                sum=sum+x;
                count++;
            }
        }
        printf("%d\n",sum);
    }
}
return 0;}
