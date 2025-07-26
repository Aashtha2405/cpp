
// There are 2 two types of header files
//1.system header files it comes with the compiler.
// #include<iostream>
//2.user-defined header file it is written by the programmer.
// #include "this.h" //-->this will produced an error if this.h is not present in the current directory.mtlb tumhe phle ek file bnna parega is name ka
using namespace std;
int main(){
    cout<<"hello world program";
    return 0;
}



//operators in c++
#include<iostream>
using namespace std;
int main(){
    int a=4, b=5;
    cout<<"Operators in c++ "<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    //Arithmetic operator
    cout<<"The value of a+b is"<<a+b<<endl;
    cout<<"The value of a-b is"<<a-b<<endl;
    cout<<"The value of a/b is"<<a/b<<endl;
    cout<<"The value of a*b is"<<a*b<<endl;
    cout<<"The value of a%b is"<<a%b<<endl;
    cout<<"The value of a++ is"<<a++<<endl;
    cout<<"The value of a-- is"<<a--<<endl;
    cout<<"The value of ++a is"<<++a<<endl;
    cout<<"The value of --a is"<<--a<<endl;
    
    return 0; 
}
    //Assignment operator-->used to assign value to variable
    int a = 3, b=9;
    char d = 'd';
    float f = 7.89;


    //comparison operator
    #include<iostream>
    using namespace std;
    int main(){
        int a=4,b=5;
        cout<<"Following are the comparison operators in c+++"<<endl;
        cout<<"The value of a==b is: "<<(a==b)<<endl;
        cout<<"The value of a!=b is: "<<(a!=b)<<endl;
        cout<<"The value of a>b is: "<<(a>b)<<endl;
        cout<<"The value of a<b is: "<<(a<b)<<endl;
        cout<<"The value of a<=b is: "<<(a<=b)<<endl;
        cout<<"The value of a>=b is: "<<(a>=b)<<endl;

        //logical operators
        cout<<"Following are the logical operators in c++"<<endl;
        cout<<"The value of  logical  AND operator is((a==b)&& (a<b)): "<<((a==b) && (a<b)) << endl;
        cout<<"The value of logical OR operator ((a==b)||(a<b)) is:" <<((a==b)||(a<b))<<endl;
        cout<<"The value of logical NOT operator (!(a==b)) is:"<<(!(a==b))<<endl;
        return 0;
    }

    