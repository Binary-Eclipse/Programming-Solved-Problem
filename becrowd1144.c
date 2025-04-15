#include<stdio.h>
int main(){
int n,l,q;
scanf("%d",&n);
for(int i=1,j=1;i<=n;i++,j++){
        /*i*/ l=i*i; q=i*l;                   // 1   1   1 || i   i*i     (i*i)*i
        //i  l+1;  q+1;                       // 1   2   2 || i  (i*i)+1  (i*i)*i+1
printf("%d %d %d\n",i,l,q);
printf("%d %d %d\n",i,l+1,q+1);
}
return 0;
}
