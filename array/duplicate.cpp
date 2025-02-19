#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,1,4,2,6,4,8};
int size=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            arr[j]=-1;
        }
    }
} for(int i=0;i<size;i++){
    if(arr[i]!=-1){
    cout<<arr[i]<<"\t";
    }
}

}
