#include<iostream>
using namespace std;
int main(){

int a;
int rev=0;
cout<<"Enter a no. = ";
cin>>a;
int b=a;

while(a>0){
        int r=a%10;
        a=a/10;
        rev=rev*10+r;
   if(b==rev){
      cout<<"palindrome";
}
else{
    cout<<"Not";
}
}
}
