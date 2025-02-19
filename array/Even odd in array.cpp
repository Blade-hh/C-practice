#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,3,4,5,6,7,8};
int odd=0;
int even=0;

for(int i=0;i<8;i++){
    if(arr[i]%2!=0){
        odd++;
    }else{
        even++;
    }
}
cout<<"EVEN = "<<even<<endl;
cout<<"ODD = "<<odd;
}
