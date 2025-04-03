#include<iostream>
using namespace std;
int main(){

    int arr[5]={11,33,66,22,88};
    int j=arr[0];
    for(int i=0;i<5;i++){

        if(arr[i]>j){
            j=arr[i];
        }
    }
    cout<<j;
}
