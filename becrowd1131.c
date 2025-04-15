#include<stdio.h>
int main(){
int x,y,z,count=1,count1=0,count2=0,count3=0;
scanf("%d %d",&x,&y);


if(x>y){
    count1++;
}
else if(x<y){
    count2++;
}
else{
    count3++;
}

printf("Novo grenal (1-sim 2-nao)\n");   //initial count set 1
scanf("%d",&z);

while(1){

if(z==1){ //if user choose 1 again so count will be continue untill he choosed 2
        count++;
scanf("%d %d",&x,&y);
if(x>y){               // if inter goal(x) is greater than gremio goal(y) so inter will be win (count1 will be increased)

    count1++;
}
if(x<y){
    count2++;          // if inter goal(x) is less than gremio goal(y) so gremio will be win (count2 will be increased)

}
if(x==y){            // if goal will equal its increased the number of equal by increased count3
    count3++;
}
printf("Novo grenal (1-sim 2-nao)\n");
scanf("%d",&z);
}


else{                                            //if he choosed 2 the whole game finished and result should be shown
printf("%d grenais\n",count);
printf("Inter:%d\nGremio:%d\nEmpates:%d\n",count1,count2,count3);


if(count1>count2){
    printf("Inter venceu mais\n");
}
else if(count1==count2){
    printf("Nao houve vencedor\n");
}
else{
    printf("Gremio venceu mais\n");
}
break;
}}
return 0;
}














