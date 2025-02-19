#include<iostream>
using namespace std;
int main(){

int arr[]={1,0,3,0,5,0,0,8};
int s=sizeof(arr)/sizeof(arr[0]);
int k=0;

for(int i=0;i<s;i++){
        if(arr[i]==0){
            k++;
        }
}
cout<<"No. of zeroes = "<<k;
}
