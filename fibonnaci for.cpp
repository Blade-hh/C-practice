#include<iostream>
using namespace std;
int main(){
int a,f=0,s=1,n;
cout<<"Enter = ";
cin>>a;

cout<<f<<endl<<s<<endl;
for(int i=3;i<=a;i++){
        n=f+s;
        f=s;
        s=n;
        cout<<n<<endl;
}
}
