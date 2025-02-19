#include<iostream>
using namespace std;
int main()
{
string s;
cout<<"Enter Website = ";
cin>>s;

if(s=="amazon" || s=="Amazon"){
cout<<"Product Or Service = ";
  cin>>s;

if(s=="Product" || s=="product"){
    cout<<"Mobile Or Clothes = ";
    cin>>s;

    if(s=="Mobile" || s=="mobile"){
        cout<<20000;
    }
    else if(s=="Clothes" || s=="clothes"){
        cout<<"10000";
    }
    else{
        cout<<"Invalid";
    }
}
else if(s=="Service" || s=="service"){
    cout<<"Not Available";
}
else{
    cout<<"Invalid";
}
}
else{
    cout<<"Invalid";
}
}
