//Program to produce student ranking
#include<iostream>
using namespace std;
int main(){
    float math,phys,chem,perc;
    cout<<"Enter Maths Score = ";
    cin>>math;
    cout<<"Enter Physics Score = ";
    cin>>phys;
    cout<<"Enter Chemistry Score = ";
    cin>>chem;
    perc=(math+phys+chem)/3;

    if((phys>100 || phys<0) || (chem>100 || chem<0) || (math>100 || math<0)){
            cout<<"Invalid";
    }
    else if((phys<35 && math>=35 && chem>=35)|| (math<35 && phys>=35 && chem>=35) || (chem<35 && math>=35 && phys>=35)){

               cout<<"Supplementary in 1";
           }
     else if((phys<35 && math<35 && chem>=35) || (phys<35 && math>=35 && chem<35) || (phys>=35 && math<35 && chem<35) || (phys<35 && math<35 && chem<35)){

            cout<<"Fail";
     }
     else if(perc>=60 && perc<=100){
                cout<<"Passed in 1st Division";
            }

     else if(perc>=50 && perc<=59){
                cout<<"Passed in 2nd Division";
            }
     else if(perc>=35 && perc<=49){
                cout<<"Passed in 3rd Division";
            }
     else{
                cout<<"Passed in 3rd Division";
            }


}

