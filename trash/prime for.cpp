#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a no. = ";
    cin>>num;
    int count=0;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;

        }
    }if(count==2){
        cout<<"Prime";
    }else{
        cout<<"Not prime";
     }

}
