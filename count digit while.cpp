#include<iostream>
using namespace std;
int main(){

int a,d=0;
cout<<"Enter a digit = ";
cin>>a;

if(a==0){
    d=1;
}
else{
while(a!=0){
    a=a/10;
    d++;

}
}
cout<<"No. of Digits = "<<d;
}
