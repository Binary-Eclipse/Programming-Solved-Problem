#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int mp;
double v=0;

for(int i=1;i<=n;i++){
    cin>>mp;
    v += (mp/100.0); // v += mp
}
double Vp=(v/n)*100.0;  // v/n

cout<<Vp<<endl;
return 0;
}
