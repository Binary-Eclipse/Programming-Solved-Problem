#include<stdio.h>
int main(){
int i,j,k=0,r;
float q;
int count=0;
for(i=1,j=1;i<=3,j<=3;i++,j++){
    printf("I=%d J=%d\n",k,j);
}
float p=0.2;
int k=1;
while(p<2.2){
    q=p+(k*1.0);
    k++;
if(p==1.00 || p==2.00 ||q==4.00 ||q==5.00 ||q==6.00 || q==7.00 || q==8.00 || q==9.00){
    printf("%.0f %.0f\n",p,q);}
else{
    printf("%.1f %.1f\n",p,q);
}
    if(count==3){
        p=p+0.2;

    }


}


}








return 0;
}
