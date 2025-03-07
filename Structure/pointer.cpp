#include<iostream>
using namespace std;


struct demo{
    int roll;
    string name;
}b;

int main(){
    demo *a;
    b.name="jatin";
    a=&b;
    cout<<a->name;

}

i
