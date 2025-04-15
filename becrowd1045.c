
#include<stdio.h>
int main(){
double A,B,C;
scanf("%lf %lf %lf",&A,&B,&C);

double t1=B+C,t2=(B*B)+(C*C),t3=A*A;
double u1=A+B,u2=(A*A)+(B*B),u3=C*C;
double v1=A+C,v2=(A*A)+(C*C),v3=B*B;
if(A>=B && A>=C){
    if(A>=t1){
            printf("NAO FORMA TRIANGULO\n");
    }
else{
    if(t3==t2){
        printf("TRIANGULO RETANGULO\n");
    }
     if(t3>t2){

        printf("TRIANGULO OBTUSANGULO\n");
     }
     if(t3<t2){
        printf("TRIANGULO ACUTANGULO\n");
     }

}}


else if(B>=A && B>=C){
    if(B>=v1){
            printf("NAO FORMA TRIANGULO\n");
    }
else{
    if(v3==v2){
        printf("TRIANGULO RETANGULO\n");
    }
     if(v3>v2){

        printf("TRIANGULO OBTUSANGULO\n");
     }
     if(v3<v2){
        printf("TRIANGULO ACUTANGULO\n");
     }

}}



else if(C>=B && C>=A){
    if(C>=u1){
            printf("NAO FORMA TRIANGULO\n");
    }
else{
    if(u3==u2){
        printf("TRIANGULO RETANGULO\n");
    }
     if(u3>u2){

        printf("TRIANGULO OBTUSANGULO\n");
     }
     if(u3<u2){
        printf("TRIANGULO ACUTANGULO\n");
     }

}}

     if(A==B && B==C && C==A){
        printf("TRIANGULO EQUILATERO\n");
     }
     if((A==B && A!=C && B!=C) || (B==C && B!=A && C!=A) || (C==A && C!=B && A!=B)){
        printf("TRIANGULO ISOSCELES\n");
     }


return 0;

}










