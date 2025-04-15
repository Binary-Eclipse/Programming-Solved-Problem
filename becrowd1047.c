#include<stdio.h>

int main(){
int ih,im;
scanf("%d %d",&ih,&im);
int fh,fm;
scanf("%d %d",&fh,&fm);
int tm,th;

if(fh>ih){
    th=fh-ih;
}
else if(fh<=ih){
    th=(24-ih)+fh;}



if(fm>=im){
    tm=fm-im;
}
else if(fm<im){
    tm=(60-im)+fm;}



    if(th==1){
if(tm==0){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",th,tm);
}

else if(tm>0 && tm<60){
    th--;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",th,tm);
}}

else if(tm>=60){
        th++;
tm=60-tm;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",th,tm);
}



return 0;
}
