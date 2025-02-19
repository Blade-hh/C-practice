#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,3,4,5,6,7,8};
int size=sizeof(arr)/sizeof(arr[0]);
int a;
cout<<"Enter the No. = ";
cin>>a;

for(int i=0;i<size;i++){
    for(int j=arr[i+1];j<size;j++){
            if(arr[i]+arr[j]==a){
                cout<<arr[i]<<",";
                cout<<arr[j]<<endl;
            }

    }
}
}
