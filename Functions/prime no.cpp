#include<iostream>
using namespace std;
int prime(int a){
bool isprime=true;
if(a<=1){
    isprime=false;
}
else{
for(int i=2;i*i<=a;i++){
    if(a%i==0){
        isprime=false;
        break;
    }
}
}
    if(isprime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }

}
int main(){
  int a;
  cout<<"Enter a no. = ";
  cin>>a;
  prime(a);
}
