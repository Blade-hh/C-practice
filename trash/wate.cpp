#include<iostream>
using namespace std;
int main(){

    int a=1;
    c:
        if(a<10){
            cout<<a<<"\t";
            a++;
            goto c;
        }

        cout<<"Done";


}
