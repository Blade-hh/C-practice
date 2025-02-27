#include<iostream>
using namespace std;

void val(int a){
  a=a+1;
  cout<<a<<endl;
}

int main(){

  int num=7;
  val(num);
  cout<<num;
}
