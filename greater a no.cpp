#include<iostream>
using namespace std;
int main(){

int a,ans=0;
cout<<"Enter a no. = ";
cin>>a;

while(a>0){
        int r=a%10;
        if(r>ans){
            ans=r;
        }
        a=a/10;

}
cout<<ans;

}
