#include<iostream>
using namespace std;
int main(){

    int a,c;
    cout<<"enter";
    cin>>a;
    int b=a;

    while(a>0){
        int d=a%10;
        c+=d*d*d;
        a=a/10;
    }
    cout<<c;
    if(b==c){
        cout<<"arm";

    }
    else{
        cout<<"not";
    }


}
