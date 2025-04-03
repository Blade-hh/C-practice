#include<iostream>
using namespace std;
int main(){

    int num=0;
    int k=2;

    while(num<=20){
        num++;
        if(num%k==0){
            cout<<num;
        }else{
            cout<<"Not";
        }

    }k++;
}
