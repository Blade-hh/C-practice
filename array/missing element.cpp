#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,4,6,8};

for(int i=0;i<4;i++){
    if(arr[i+1]-arr[i]>1){
        cout<<arr[i]+1<<"\t";
    }
}
}
