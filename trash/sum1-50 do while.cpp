#include<iostream>
using namespace std;
int main(){

    int sum,n,num=1;
    cout<<"enter a no. = ";
    cin>>n;
    do{
        sum+=num;
        num++;
    }while(num<=n);

    cout<<sum;
}
