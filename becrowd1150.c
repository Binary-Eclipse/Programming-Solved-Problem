#include<stdio.h>
int main(){
int x,z;
scanf("%d",&x);
while(z<=x){
    scanf("%d",&z);
}
int sum=0,count=0;
for(int i=x;;i++){
        count++;
sum=sum+i;
if(sum>z){
    break;
}

}

printf("%d\n",count);
return 0;

}
