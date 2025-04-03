#include<iostream>
using namespace std;
int main(){
    int a=2;

    while(a<=20){
        int i=2;
        int f=0;

        while(i*i<=a){
            if(a%i==0){
                f=1;
                break;
            }
            i++;
        }
        if(f==0){
            cout<<a<<"\t";
        }
        a++;
    }
}
