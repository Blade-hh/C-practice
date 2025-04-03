#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int a;
    int s=sizeof(arr)/sizeof(arr[0]);//to count the length of array
    cout<<"Size of array = "<<s<<"\n\n";

    for(int i=0;i<s;i++){
        cout<<"Enter a no. =  ";    //Take input from user and insert in array
        cin>>a;
        arr[i]=a;
    }

    cout<<"\nElements entered \n";
    for(int i=0;i<s;i++){            //to print the elements of array
        cout<<arr[i]<<"\t";
    }
}

//wap to display only even element of array;
