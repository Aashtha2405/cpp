//pointers are data type which holds the address of other data types
#include<iostream>
using namespace std;
int main(){
    int a= 3;
    int * b = &a;
    //&--->address of operator
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<b<<endl;
    
    //*-->(value at)dereference operator 
    cout<<"value at address b is "<<endl;

    //pointer to pointer
    int **c = &b;
    cout<<"address of b is "<<b<<endl;
    cout<<"address of b is "<<c<<endl;
    cout<<"value at address c is "<<*c<<endl;
    cout<<"value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}