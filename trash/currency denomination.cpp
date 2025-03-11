#include<iostream>
using namespace std;
int main(){

int a;
cout<<"Enter your Amount = ";
cin>>a;
int one=0, two=0, five=0, ten=0, twenty=0, fifty=0, hundred=0, thundred=0, fhundred=0;


if(a>=500){
    fhundred=a/500;
    a=a%500;
}

if(a>=200){
    thundred=a/200;
    a=a%200;
}

if(a>=100){
    hundred=a/100;
    a=a%100;
}


if(a>=50){
    fifty=a/50;
    a=a%50;
}

if(a>=20){
    twenty=a/20;
    a=a%20;
}

if(a>=10){
    ten=a/10;
    a=a%10;
}
if(a>=5){
    five=a/5;
    a=a%5;
}
if(a>=2){
    two=a/2;
    a=a%2;
}
if(a>=1){
    one=a/1;
    a=a%1;
}

cout<<"in five hundred = "<<fhundred<<endl;
cout<<"in two hundred = "<<thundred<<endl;
cout<<"in hundred = "<<hundred<<endl;
cout<<"in fifty = "<<fifty<<endl;
cout<<"in twenty = "<<twenty<<endl;
cout<<"in ten = "<<ten<<endl;
cout<<"in five = "<<five<<endl;
cout<<"in two = "<<two<<endl;
cout<<"in one = "<<one;
}
