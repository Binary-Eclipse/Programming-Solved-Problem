#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string word;
cin>>word;
int uppercaseCount=0;
int lowercaseCount=0;

for(char c: word){
if(c >='a' && c<='z'){
    lowercaseCount++;
}else if(c >= 'A' && c<='Z'){
    uppercaseCount++;
}
}

if(uppercaseCount > lowercaseCount){
    transform(word.begin(),word.end(),word.begin(),::toupper);
     cout<<word<<endl;
}else{
    transform(word.begin(),word.end(),word.begin(),::tolower);
    cout<<word<<endl;
}

return 0;
}






