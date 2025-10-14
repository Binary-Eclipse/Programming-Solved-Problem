#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char ch[n];
int cnt=0;

for(int i=0;i<n;i++){
    cin>>ch[i];
}
for(int i=1;i<n;i++){
    if(ch[i] == ch[i-1]){
        cnt++;
    }
}


cout<<cnt<<endl;
return 0;
}
