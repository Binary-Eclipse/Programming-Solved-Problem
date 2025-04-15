#include<stdio.h>
int main(){
int case_number;
scanf("%d",&case_number);
float x,y,z;
for(int i=1;i<=case_number;i++){

    scanf("%f %f %f",&x,&y,&z);
float average=((x*2.0)+(y*3.0)+(z*5.0))/10.0;
printf("%.1f\n",average);
}

}
