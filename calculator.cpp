#include<iostream>
using namespace std;
int main()
{
int a,b;
char c;
cout<<"Enter a no. = ";
cin>>a;
cout<<"Enter a no. = ";
cin>>b;
cout<<"Enter the symbol = ";
cin>>c;

if(c=='+'){
  cout<<"Sum = "<<a+b;
}
else if(c=='-'){
  cout<<"Subtraction = "<<a-b;
}
else if(c=='*'){
  cout<<"Multiplication = "<<a*b;
}
else if(c=='/'){
  cout<<"Division = "<<a/b;
}
else if(c=='%'){
  cout<<"Modulus = "<<a%b;
}
else{
  cout<<"Invalid";
}
}
