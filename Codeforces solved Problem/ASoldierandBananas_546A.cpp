#include<iostream>
using namespace std;
int main(){
long long intvalue,money,nmbrOfbanana;
cin>>intvalue;
cin>>money;
cin>>nmbrOfbanana;

long long total_costs=0;
long long indv;
for(int i=1;i<=nmbrOfbanana;i++){
indv=intvalue*i;
total_costs+=indv;
indv=0;
}

if(total_costs > money){
    cout<< (total_costs - money) <<endl;
}else{
     cout<<"0"<<endl;
}
return 0;
}
