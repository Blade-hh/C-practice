#include<iostream>
using namespace std;
int main(){

    int num;
    int i=1;
    bool isprime=true;
    //cout<<"Enter a no. = ";
    //cin>>num;

    do{

     i++;
     if(num%i==0){
        isprime=false;
        break;
     }
    }while(i<=20);

    if(isprime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}



