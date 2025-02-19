#include<iostream>
using namespace std;
int main(){

int arr[5];
int ara[5];
int b;

for(int i=0;i<5;i++){
    cout<<"Enter a no. = ";
    cin>>arr[i];
}
for(int i=0;i<5;i++){
    if(arr[i]>arr[i-1]){
        b=arr[i];
      }
    }cout<<b;

}
