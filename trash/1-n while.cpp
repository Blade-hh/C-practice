#include<iostream>
using namespace std;
int main(){

    int sum,n,num=1;
    cout<<"enter a no. = ";
    cin>>n;

    while(num<=n){
            if(num%2==0){
            sum+=num;
           }
           num++;
    }

    cout<<sum;
}
