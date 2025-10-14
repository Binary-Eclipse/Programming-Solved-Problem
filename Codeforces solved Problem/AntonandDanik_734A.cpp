#include<iostream>
using namespace std;
int main(){
int game;
cin>>game;
string won;
cin>>won;
int countForAnton=0;
int countForDanik=0;

for(char c:won){
    if(c == 'A'){
        countForAnton++;
    }else if(c == 'D'){
        countForDanik++;
    }
}

if( countForAnton > countForDanik){
    cout<<"Anton"<<endl;
}else if(countForAnton < countForDanik){
    cout<<"Danik"<<endl;
}else{
    cout<<"Friendship"<<endl;
}


return 0;
}
