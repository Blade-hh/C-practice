#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=5;i++){
        for(int c=5;c>=i;c--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
