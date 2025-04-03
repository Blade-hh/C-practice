#include<iostream>
using namespace std;
int main(){

    for(int r=1;r<=3;r++){
        for(int c=3;c>=r;c--){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}
