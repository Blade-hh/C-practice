#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,4,8,15};

for(int i=0;i<5;i++){
    if(arr[i+1]+arr[i]==3){

            cout<<arr[i]<<"\t";

    }
}
}
