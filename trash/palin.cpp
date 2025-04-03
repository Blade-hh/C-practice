#include<iostream>
using namespace std;
int main(){

    int num,num3=0;
    cout<<"Enter three digit no. = ";
    cin>>num;
    int num2=num;

    while(num>0){
        int dump=num%10;
        num3=(10*num3)+dump;
        num=num/10;
    }

    cout<<num3<<"\n";

    if(num3==num2){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not an Palindrome";
    }
}
