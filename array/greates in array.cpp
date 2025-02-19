#include<iostream>
using namespace std;
int main(){

int a=0;
int arr[6];

for(int i=0;i<6;i++){
    cout<<"Enter a no. = ";
    cin>>arr[i];
}

for(int i=0;i<6;i++){
   if(arr[i]>a){
       a=arr[i];
   }

}
cout<<"Greatest = "<<a;
}
