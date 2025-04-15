
#include<stdio.h>
int main(){
    int x;
for(int i=1;;i++){
    scanf("%d",&x);
    if(x==0){
        break;
    }
    else{
        for(int j=1;j<=x;j++){
            if(j==x){
                printf("%d\n",j);
            }
            else{
            printf("%d ",j);
        }
    }
} }
return 0;
}
