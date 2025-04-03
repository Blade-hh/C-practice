#include<iostream>
using namespace std;
int main(){

    int len,tar,j=0,p=0;
    int arr[len];

    cout<<"Enter the lenght of array = ";
    cin>>len;
    cout<<"Enter the elements \n";
    for(int i=0;i<len;i++){
        cin>>j;
        arr[i]=j;
    }
    cout<<"enter target = ";
    cin>>tar;
    for(int i=0;i<len;i++){

        if(arr[i]==tar){
            p=1;
            cout<<"yes";
            break;
        }

    }
    if(p==0){
       cout<<"no";
    }

}
