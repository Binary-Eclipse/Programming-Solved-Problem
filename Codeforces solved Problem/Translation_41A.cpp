#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s;
string t;
cin>>s>>t;
string revt=t;
reverse(revt.begin(),revt.end());
if(s == revt){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
return 0;
}
