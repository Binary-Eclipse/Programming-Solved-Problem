#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++){
    scanf("%d",&x[i]);
}
int c,p,min=x[0];
for(i=0;i<n;i++){
if(x[0]>x[i]){
    min=x[i];
    x[0]=x[i];
} }
for(i=0;i<n;i++){
    if(x[i]==min){
c=i;
    }
}

printf("Menor valor: %d\nPosicao: %d\n",min,c);
return 0;
}
