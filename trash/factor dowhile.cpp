#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a no. = ";
    cin>>num;
    int i=1;

    do{
        i++;
        if(num%i==0){
            cout<<i<<"\n";
        }
    }while(i<=num);

}
