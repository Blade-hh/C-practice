#include<iostream>
using namespace std;
int main(){

int a;
cout<<"Enter a no. = ";
cin>>a;

for(int i=a;i<=10;i++){

  for(int j=1;j<=10;j++){
    cout<<i*j<<"\t";
}
cout<<endl;
}
}
