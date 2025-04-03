#include<iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cout<<"enter two= ";
    cin>>a>>b;

    cout<<a<<"\n"<<b;

    c=a;
    a=b;
    b=c;

    cout<<"\n"<<a<<"\n"<<b;
}
