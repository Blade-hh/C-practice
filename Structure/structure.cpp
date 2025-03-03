#include<iostream>
using namespace std;


struct student{
    int roll;
    string name;
    char grade;
    float per;

    void show(){
        cout<<roll<<endl<<name<<endl<<grade<<endl<<per<<endl;
    }
};

int main(){

    student data;
    cout<<"Enter Roll no. = ";
    cin>>data.roll;
    cout<<"Enter Name = ";
    cin>>data.name;
    cout<<"Enter Grade = ";
    cin>>data.grade;
    cout<<"Enter Percentage = ";
    cin>>data.per;

    data.show();

}
