#include<iostream>
using namespace std;
int main(){

int a;
bool isprime=true;

cout<<"Enter a no. = ";
cin>>a;

if(a<=1){
    isprime=false;
}
else{
for(int i=2;i*i<=a;i++){
    if(a%i==0){
        isprime=false;
        break;
    }

}
}
    if(isprime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }

}
