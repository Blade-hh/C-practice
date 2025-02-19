#include<iostream>
using namespace std;
int main(){

int b;
int a=0;
cout<<"Enter a no. = ";
cin>>b;

while(b>0){
    int c=b%10;
    a=a+c;
    b=b/10;
}
cout<<a;

}

