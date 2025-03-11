#include<iostream>
using namespace std;
int main(){

int a,b,c;
cout<<"Enter two no> = ";
cin>>a>>b;
cout<<"\n 1 for +,2 for -,3 for *,4 for / \n";
cin>>c;

    switch(c)
    {

    case 1:
           cout<<a+b;;
           break;
    case 2:
           cout<<a-b;;
           break;
    case 3:
           cout<<a*b;;
           break;
    case 4:
           cout<<a/b;
           break;

           default:
               {
                   cout<<"invalid choice";
                   break;
               }

    }
}
