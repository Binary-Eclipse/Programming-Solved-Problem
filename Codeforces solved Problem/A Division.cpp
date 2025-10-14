#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int array[n];
for(int i=1;i<=n;i++){
	cin>>array[i];
}
for(int i=1;i<=n;i++){
	if(array[i]>=1900){
		cout<<"Division 1"<<endl;
	}else if(array[i]<=1899 && array[i]>=1600){
		cout<<"Division 2"<<endl;
	}else if(array[i]<=1599 && array[i]>=1400){
		cout<<"Division 3"<<endl;
	}else{
		cout<<"Division 4"<<endl;
	}
	}
   cout<<endl;
return 0;
}
