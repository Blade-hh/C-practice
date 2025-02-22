#include<iostream>
using namespace std;


int fibb(int a){
    int n=0;
    int f=0;
    int s=1;

    cout<<f<<endl<<s<<endl;
    for(int i=3;i<=a;i++){
        n=f+s;
        f=s;
        s=n;
        cout<<n<<endl;
}
}
int main(){
    int a;
    cout<<"Enter a no. = ";
    cin>>a;
    fibb(a);
}
