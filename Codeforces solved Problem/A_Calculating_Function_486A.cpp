#include<iostream>
using namespace std;
int main(){
long long n;
cin>>n;
long long evencount=(n/2);
long long oddcount=(n+1)/2;

long long evenSum=(evencount*(evencount+1));
long long oddSum=(oddcount*oddcount);
long long sum=evenSum-oddSum;
cout<<sum<<endl;
return 0;
}
/*for(int i=2;i<=n;i++){  it exceed time limit
    if(i%2==0){
        sum+=i;
    }else if(i%2 !=0){
        sum-=i;
    }
}*/
