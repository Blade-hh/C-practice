#include<iostream>
using namespace std;

struct maths{

struct maths *point;
int show(int x,int y){
    int sum=x+y;
    return sum;
}
};

int main(){
    maths obj1,obj2;

    obj1.point=&obj2;
    int x,y;

    cout<<"Enter first digit = ";
    cin>>x;
    cout<<"Enter second digit = ";
    cin>>y;

    cout<<obj1.point->show(x,y);
}


