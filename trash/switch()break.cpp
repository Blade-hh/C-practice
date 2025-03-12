#include<iostream>
using namespace std;
int main(){

int a;
char c;
cout<<"Enter a character = ";
cin>>c;
cout<<"Press 1 for vowel or consonant, press 2 for gender \n";
cin>>a;

switch(a){

      case 1:
            {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
               cout<<"Vowel";

            }
            else{
               cout<<"COnsonant";
            }
            break;
            }
     case 2:
     {
       if(c=='f' || c=='F'){
         cout<<"Female";
       }
       else if(c=='m' || c=='M'){
        cout<<"Male";
       }
       else{
        cout<<"Invalid";
       }
       break;

     }
     default:
     {
     cout<<"Invalid";
     }
}
}
