#include<stdio.h>
int main(){
int i,j,N[20];
for(i=0,j=19;i<20,j>=0;i++,j--){
    scanf("%d",&N[i]);

}
for(i=19,j=0;i>=0,j<20;i--,j++){
    printf("N[%d] = %d\n",j,N[i]);
}
return 0;}
