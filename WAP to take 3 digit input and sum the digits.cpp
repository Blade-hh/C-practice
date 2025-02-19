#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e;
cout<<"Enter 3 Digit No.";
cin>>a;
b=a/100;
c=a%100;
d=c/10;
e=c%10;
cout<<"Sum Of 3 Digit = ";
cout<<b+d+e;
}
