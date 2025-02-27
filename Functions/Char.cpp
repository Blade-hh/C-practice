#include<iostream>
using namespace std;
int main(){

string s;
cout<<"Enter a string = ";
cin>>s;
string b;
cout<<"Enter a string = ";
cin>>b;

if(s.length()==b.length())
for(int i=0;i<s.length();i++){
        bool check=true;
        for(int j=0;j<b.length();j++){
            if(s[i]==b[j]){
                b[j]='#';
                check=false;
                break;
            }
        }
if(check==true){
    cout<<"Not an Anagram";
    break;
}
}
cout<<"Anagram";
}
