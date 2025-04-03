#include<iostream>
using namespace std;
int main(){

    int arr[5]={1,3,6,2};


        for(int x:arr){
                arr[4]=456;
            cout<<x<<"\t";
        }

}
