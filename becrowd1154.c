
#include<stdio.h>
int main(){
int n,sum=0,count=0;
while(1){
    scanf("%d",&n);
    if(n<0){
        break;}
    else{
        sum=sum+n;
    count++;}
    }
float avg=(sum*1.00)/(count*1.00);
printf("%.2f\n",avg);

return 0;
}
