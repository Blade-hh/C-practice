//program for finding greatest among three
#include<iostream>
using namespace std;
int main(){

int a,b,c;
cout<<"Enter a = ";
cin>>a;
cout<<"Enter b = ";
cin>>b;
cout<<"Enter c = ";
cin>>c;
if(a>b && a>c){
  cout<<a<<" is Larger";
}
else if(b>a && b>c){
  cout<<b<<" is Larger";

}
else if(c>a && c>b){
  cout<<c<<" is Larger";

}
else if(a==b && a!=c){
    cout<<a<<" is Larger";
}
else if(b==c && b!=a){
    cout<<b<<" is Larger";
}
else if(c==a && c!=b){
    cout<<c<<" is Larger";
}
else if(a==b && a==c){
   cout<<"All are equal";
}
else{
    cout<<"Invalid";
}
}
