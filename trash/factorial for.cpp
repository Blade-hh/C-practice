#include<iostream>
using namespace std;
int main(){
    int a,k,b=1;
    cout<<"Enter = ";
    cin>>a;
    cout<<"Enter power = ";
    cin>>k;

    for(k;k>0;k--){
        b*=a;
    }
    cout<<"Factorial = "<<b;
}
