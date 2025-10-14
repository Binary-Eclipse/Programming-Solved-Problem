#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string chat;
 getline(cin,chat);
 int charCount=0;

 set<char> uniqueChars;
for(char c : chat){
    if(c!=' '){
        uniqueChars.insert(c);
    }
}
if(uniqueChars.size()%2 == 0){
    cout<< "CHAT WITH HER!"<<endl;
}else{
    cout<<  "IGNORE HIM!"<<endl;
}


return 0;
}
