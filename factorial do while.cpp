#include<iostream>
using namespace std;
int main(){

int a;
cout<<"Enter a no. = ";
cin>>a;
int b=1;
int i=1;

do{
    b=b*i;
    i++;
}
while(i<=a);{
    cout<<"Factorial of "<<a<<endl<<b;
}

}
