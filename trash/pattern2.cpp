#include<iostream>
using namespace std;
int main(){

    for(int r=1;r<=5;r++){
        for(int s=4;s>=r;s--){
            cout<<" ";
        }
        for(int c=1;c<=r;c++){
            cout<<r;
        }
        //for(int c2=1;c2<=r;c2++){
         //   cout<<"*";
        //}
        cout<<"\n";
    }



}

