#include<iostream>
using namespace std;


struct demo{
    int roll;
    string name;
    struct demo *link;
    struct demo *kill;
};

int main(){

    demo obj1,obj2,obj3;

    obj1.link=NULL;
    obj1.name="Rahul";
    obj1.roll=11;

    obj2.roll=12;
    obj2.kill=NULL;
    obj2.name="Raj";

    obj3.name="Blade";
    obj3.roll=13;
    obj3.kill=NULL;

    obj1.link=&obj2;
    obj2.kill=&obj3;
    obj3.link=&obj1;

    cout<<obj1.link->name<<" = "<<obj1.link->roll<<endl;
    cout<<obj2.kill->name<<" = "<<obj2.kill->roll<<endl;
    cout<<obj3.link->name<<" = "<<obj3.link->roll<<endl;

}

