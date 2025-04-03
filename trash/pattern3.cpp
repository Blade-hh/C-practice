#include<iostream>
using namespace std;
int main(){

    for(char r='a';r<='d';r++){
        for(char s='d';s>=r;s--){
            cout<<" ";
        }
        for(char c='a';c<=r;c++){
            cout<<c;

        }
        //for(int c2=1;c2<=r;c2++){
         //   cout<<"*";
        //}
        cout<<"\n";
    }



}

