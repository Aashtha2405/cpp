//variables types
//1.int
//2,float
//3.char
//4.double
//5.string
//6.Boolean

//Based on scope,variable can be classified into two types
//1.local variables
//2.global variables

//scope of a variable is the region in code where the enistence of variable is valid based on scope we have local variable and global variable


//local variable-local variables are declared inside the braces of any function and can be accessed only from there.


//global variable-global variables are declared outside any function and can be accessed from anywhere.

//c++ data types
//data types defines the type of data a variable can hold foe example an integer variable can hold integer data and so on


//data types in c++ are categorised in three groups
//1.Built-in
//2.User-defined
//3.derived


//1.Built-in data types are int,float,char,double(larger decimal precision),boolean(true,false)

//2.User-defined data ttpes are user,union,enum

//3.Derived data types are array,function,pointer


#include<iostream>
using namespace std;
int main(){
    // int a=4;
    // int b=5;
    int a = 4, b = 5;
    float pi = 3.14;
    cout<<"This  is tutorial 4. here the value of a is "<<a<<". the value of b is"<<b;
    cout<<"\n";
    cout<<"The value of pi is: "<<pi;
    return 0;

}



//local variable ko jyada precedense milta h global variable se


#include<iostream>
using namespace std;
int main(){
    bool is_true = true;
    cout<<"this is bololean: "<<is_true;
    return 0;
}

//for false boolean it will give 0 



//rules of declare variables in c++
// code with haary notes see there