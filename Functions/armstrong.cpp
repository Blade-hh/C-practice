#include<iostream>
using namespace std;

int arms(int a){
  int b=a;
  int cb;
  int sum;
  while(a>0){
    sum=a%10;
    cb+=sum*sum*sum;
    a=a/10;
  }
  if(b==cb){
        cout<<"Armstrong";
    }else{
        cout<<"not";

    }

}
int main(){
    int a;
    cout<<"Enter a no. = ";
    cin>>a;
    arms(a);



}


