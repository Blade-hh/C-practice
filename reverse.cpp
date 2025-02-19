#include<iostream>
using namespace std;
int main(){

int a,c=0,b,r;
int rev=0;
cout<<"Enter a no. = ";
cin>>a;
b=a;

while(a>0){
        int r=a%10;
         c=c*10+r;
         a=a/10;
}
cout<<c;
}

