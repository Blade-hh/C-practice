#include<iostream>
using namespace std;
int main(){

    int len,tar;
    int arr[len];

    cout<<"Enter the lenght of array = ";
    cin>>len;
    cout<<"Enter the elements \n";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"enter target = ";
    cin>>tar;
    for(int i=0;i<len;i++){

        if(arr[i]==tar){
            cout<<"yes";
            break;
        }

    }cout<<"no";


}
