#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter year's of experience = ";
cin>>a;
cout<<"Enter your salary = ";
cin>>b;

if(a==0 || a==1){
        cout<<b;
}
else if(a>=2 && a<=5){
    cout<<"10% hike = "<<10*b/100+b;
}
else if(a>5){
    cout<<"20% hike = "<<20*b/100+b;
}
else{
    cout<<"Invalid";
}
}
