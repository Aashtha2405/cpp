// constants,manipulators and operator precedence
#include<iostream>
using namespace std;
int main(){
    //variable ka value change kr skte h
    int a =34;
    cout<<"the value of a was: "<<a;
    a = 45;
    cout<<"the value of a is: "<<a;

    //constants in c++ means we change the value 
    const int a = 3;
    cout<<"the value of a was: "<<a;
    // a = 45;//here we canot change the value of above variable u will get a error because a is constant
    // cout<<"the value of a is: "<<a;
    return 0;
}


//manipulators in c++ jo aapka data display kaise ho rha h usko manage krte h jaise endl,#include<iomanip>

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 3, b = 78, c =  1233;
    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    cout<<"the value of b is: "<<setw(5)<<b<<endl;
    cout<<"the value of c is: "<<setw(6)<<c<<endl;


    //without setw()
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;
    cout<<"the value of c is: "<<c<<endl;


    //operator precendence
    //link for operator precendence c++ operator precendence
    int a = 3, b = 4;
    //int c = (a*5)+b;
    // int c = (a*5)+b-45+87;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    cout<<c;
    return 0;

 }



