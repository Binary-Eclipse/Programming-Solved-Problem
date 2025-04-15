#include<stdio.h>
int main(){
int x,y;
for(int i=1;;i++){
        int sum=0;
scanf("%d %d",&x,&y);
if(x<=0 || y<=0){
    break;
}
else if(x>y){
    for(int i=y;i<=x;i++){
        printf("%d ",i);
        sum=sum+i;
    }}
    else if(x<y){
        for(int i=x;i<=y;i++){
       printf("%d ",i);
       sum=sum+i;
        }
    }
printf("Sum=%d\n",sum);

}
return 0;
}
