/*homework

Q.1 WAP to find out the given year is leap year or not;
Q.2 WAP for currency denomination;
Q.3 WAP to print table of give input;
Q,4 WAP to print decsendimg order of given input;

##ControlFlow ___ TransferStatement##

   "GOTO"

   def:goto is used cpp for skip the statements form the position where goto is delared and processes the statement at the label declared in code.


   Example
   */
#include<iostream>
using namespace std;
int main(){

    int a=10;
    cout<<"Hello\n";
    goto h;
    a=90;
    cout<<"World\n";
    cout<<"Johny\n";

    //'h' is the label declared in the goto statement
    //Note: 'h' uses the ':' to declare

    h:
    cout<<"Blade\n";
    cout<<a;


}
