#include<stdio.h>
int main(){
float salary,tax,cutsalary,remain;
scanf("%f",&salary);
if(salary>=0.00 && salary<=2000.00){
    printf("Isento\n");
}
else if(salary>2000.00){
    if(salary>=2000.01 && salary<=3000.00){

         cutsalary=salary-2000.00;
        tax=cutsalary*0.08;
        printf("R$ %.2f\n",tax);
    }


else if(salary>=3000.01 && salary<=4500.00){

    cutsalary=salary-2000;
    remain=cutsalary-1000;
    tax=(1000.00*0.08)+(remain*0.18);
    printf("R$ %.2f\n",tax);

}


else if(salary>4500.00){

    cutsalary=salary-2000;
    remain=cutsalary-2500;
    tax=(1000.00*0.08)+(1500.00*0.18) +(remain*0.28);
    printf("R$ %.2f\n",tax);

}}
return 0;

}
