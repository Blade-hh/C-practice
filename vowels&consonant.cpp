#include <iostream>
using namespace std;

int main() {
    string v;
    int a=0,b=0;
    cout << "Enter number of rows: ";
    cin >> v;

    for (char i:v) {
            i=tolower(i);

            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
                a++;
            }else if(isalpha(i)){
                b++;
                }
       cout<<a<<endl<<b;
    }

    return 0;
}
