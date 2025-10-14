#include<iostream>
using namespace std;
int main(){
int testcase;
cin>>testcase;
int countArr[4];

for(int i=0;i<testcase;i++){
	int array[4]={0};
	
	for(int j=0;j<4;j++){
		cin>>array[j];
	}
	
	int count=0;
	
	for(int k=1;k<4;k++){
		if(array[0]>array[k]){
			count++;
		}
	}
	countArr[i]=count;
}
 for(int l=0;l<4;l++){
 	cout<<countArr[l]<<endl;
 }
   cout<<endl;
return 0;
}
