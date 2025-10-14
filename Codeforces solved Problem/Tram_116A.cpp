#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<pair<int,int>> values;

for(int i=0; i<n; i++){
     int a,b;
     cin>> a >> b;
     values.push_back({a,b});
}

int result=0;
int maxCapacity=INT_MIN;

 for(auto p: values){
    result=result - p.first + p.second;
    maxCapacity= max(maxCapacity,result);
 }

 cout<<maxCapacity<<endl;

return 0;
}
