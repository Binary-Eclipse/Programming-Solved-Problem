#include<iostream>
using namespace std;
int main(){
int arr[5][5];
int cnt=0,row=0,col=0;

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
        row=i;
        col=j;
       }
    }
}

if(row ==2 && col==2){
    cnt=0;
}else{
    do{
          if(row > 2){
            row--;
            cnt++;
          }
          else if(row<2){
            row++;
            cnt++;
          }
          if(col>2){
            col--;
            cnt++;
          }
          else if(col<2){
            col++;
            cnt++;
          }
}while(row !=2 || col!=2);
}
  cout<<cnt<<endl;
return 0;
}
