#include<iostream>
#include<algorithm>
using namespace std;

int main(){
string math;
cin>>math;
string digit="";

for(char c: math){
    if(isdigit(c)){
        digit +=c;     // character concatenation
    }
}


sort(digit.begin(),digit.end()); // string sort

string result="";
for(int i=0; i<= digit.size()-1;i++){
    result += digit[i];
    if( i != digit.size()-1) result += '+';
}

cout<<result<<endl;

return 0;
}
