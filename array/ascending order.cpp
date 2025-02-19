#include<iostream>
using namespace std;
int main(){

int a=0;
int arr[6];

for(int i=0;i<6;i++){
    cout<<"Enter a no. = ";
    cin>>arr[i];
}
int k;
cout<<"Enter the k no. = ";
cin>>k;

for(int i=0;i<k;i++){

   for(int j=i+1;j<6;j++){
        if(arr[j]<arr[i]){
          int sort=arr[i];
          arr[i]=arr[j];
          arr[j]=sort;

        }
   }

}


   cout<<arr[k-1];


}
