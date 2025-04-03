#include<iostream>
using namespace std;
int main(){

    for(int r=1;r<=5;r++){
        for(int s=4;s>=r;s--){
            cout<<" ";
        }
        for(int c=1;c<=r;c++){
            cout<<"*"<<" ";
        }

        cout<<"\n";
    }

    for(int r1=1;r1>=1;r1++){
        for(int s1=4;s1<=r1;s1--){
            cout<<" ";
        }
        for(int c1=5;c1>=r1;c1--){
            cout<<"*"<<" ";
        }

        cout<<"\n";
    }


}

