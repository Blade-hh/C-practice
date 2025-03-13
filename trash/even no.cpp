#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter a no. = ";
    cin>>a;
    int i=1;

    do{
        if(a>0){
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
        i++;
        }else{
            cout<<"Invalid";
            break;

        }
    }
    while(i<=10);

}
