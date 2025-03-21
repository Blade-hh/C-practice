#include<iostream>
using namespace std;
int main(){

    int num;
    int i=2;
    bool isprime=true;
    cout<<"Enter a no. = ";
    cin>>num;

    do{

     i++;
     if(num%i==0){
        isprime=false;
        break;
     }
    }while(i*i<=num);

    if(isprime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}



