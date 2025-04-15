#include<stdio.h>
#include<string.h>
int main(){
char str[20];
gets(str);
if(strlen(str)>=10){
    printf("palavrao\n");
}
else{
    printf("palavrinha\n");
}
return 0;
}
