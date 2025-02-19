#include<iostream>
using namespace std;
int main(){

int arr[]={1,1,2,1,1};
int i=0;
int j=5;

while(i<j){
    if(arr[i]==arr[j]){
        cout<<"palindrome";
    }else{
        cout<<"not";
    }
    i++;
    j--;
break;}

}
