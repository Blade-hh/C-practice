#include<iostream>
using namespace std;
int main(){

int b;
int a=0;

cout<<"Enter a no. = ";
cin>>b;

for(int i=1;i<b;i++){
if(b%i==0){
    cout<<i<<endl;
}
}
}

