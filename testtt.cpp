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
         c=c+r*r*r;
         a=a/10;
}
if(b==c){
    cout<<"Armstrong";
}
else{
    cout<<"not";
}
}

