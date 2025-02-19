#include<iostream>
using namespace std;
int main(){

int a,c=0;
cout<<"Enter a no. = ";
cin>>a;

while(a>0){
        int r=a%10;
        c=c+r;
        a=a/10;

}
cout<<c;

}


