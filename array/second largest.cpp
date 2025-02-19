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

   for(int j=i+1;j<6;j++){
        if(arr[j]<arr[i]){
          int sort=arr[i];
          arr[i]=arr[j];
          arr[j]=sort;

        }
   }
}
   cout<<arr[4];


}
