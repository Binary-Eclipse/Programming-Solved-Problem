#include <stdio.h>

int main() {

    int N,count1=0,count2=0;
    scanf("%d",&N);
    int x[N];
    for(int i=1;i<=N;i++){

        scanf("%d",&x[i]);
        if(x[i]>=10 && x[i]<=20){
            count1++;
        }
        else{
            count2++;
        }
    }
printf("%d in\n%d out\n",count1,count2);
    return 0;
}
