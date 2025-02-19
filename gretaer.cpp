#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a PWD = ";
    cin>>a;

//###only print no. greater than 0 and less than 50
//(a<50 && a>0)?cout<<a:cout<<"Invalid";

// ###no. divisible by 2 and 10
//(a%2==0 && a%10==0)?cout<<"True":cout<<"False";

//###only print no. greater than 0 and less than 50
//(a>50 && a<100)?cout<<a:cout<<"Invalid";
//(a%2==0 && a>20)?cout<<a:cout<<"Invalid";

(a==1234)?cout<<"Valid":(a==1234)?cout"Valid":cout<<"Invalid";

}
