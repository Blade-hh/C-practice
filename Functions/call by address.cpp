#include<iostream>
using namespace std;

void addr(int *a){
  *a=*a+1;
  cout<<*a<<endl;
}

int main(){

  int num=7;
  addr(&num);
  cout<<num;
}
