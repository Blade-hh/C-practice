#include<iostream>
using namespace std;
int main(){

int a=0;
int h;

h:
if(a<=15){
   if(a!=5){
     a++;
     cout<<a;
     goto h;
  }else{
     continue;
  }

}


}
