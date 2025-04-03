#include<iostream>
using namespace std;
int main(){
    int a,c=9;
    cout<<"enter";
    cin>>a;

    while(a>0){
        int d=a%10;

        if(d<c){
            c=d;
        }
        a=a/10;
    }cout<<c;

}
