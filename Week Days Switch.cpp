#include<iostream>
using namespace std;
int main(){

int a,b;
char cal;
cout<<"Enter a no. = ";
cin>>a;
cout<<"Enter a no. = ";
cin>>b;
cout<<"Enter a Symbol = ";
cin>>cal;

switch(cal){

case '+':cout<<a+b;
break;

case '-':cout<<a-b;
break;

case '*':cout<<a*b;
break;

case '/':cout<<a/b;
break;

case '%':cout<<a%b;
break;

default:cout<<"Invalid";

}
}
