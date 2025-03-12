#include<iostream>
using namespace std;
int main(){
    int num,choose;
    cout<<"Enter a Number = ";
    cin>>num;
    cout<<"\n============================================\n\n";
    cout<<"To Find Even or Odd press 1 \n";
    cout<<"To Find Number is Lear Year or Not press 2 \n";
    cout<<"To Find Square of Given Number press 3 \n";
    cout<<"To Find Cube of Given Number press 4 \n\n";
    cout<<"============================================\n\n";
    cout<<"Choose : ";
    cin>>choose;
    cout<<"\n============================================\n\n";

    switch(choose){
        case 1:{
            if(num%2==0){
                cout<<"Number is Even";
            }else{
                cout<<"Number is Odd";
            }
            break;
        }
        case 2:{
            if((num%4==0 && num%100!=0) || (num%400==0) ){
                cout<<"Leap Year";
            }
            else{
                cout<<"Not a Leap Year";

            }
            break;
        }
        case 3:{
            cout<<"The Square root of Given Number is = "<<num*num;
            break;
        }
        case 4:{
            cout<<"The Cube of Given Number is = "<<num*num*num;
            break;
        }
        default:{
            cout<<"Invalid Input";
            break;
        }

    }
}
