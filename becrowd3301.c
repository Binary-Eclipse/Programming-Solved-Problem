#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(b>a && b>c){
    printf("huguinho\n");
}
else if(b<a && b<c){
    printf("luisinho\n");
}
else {
    printf("zezinho\n");
}
return 0;
}
