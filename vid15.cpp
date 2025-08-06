//functions and function prototypes in c++
#include<iostream>
using namespace std;
//function prototype
// a and b are formal parameters
    int sum(int a , int b){
        int c = a+b;
        return c;
    }
    int main(){
        int num1,num2;
        cout<<"enter first number: ";
        cin>>num1;
        cout<<"enter second number: ";
        cin>>num2;
        //num1 and num2 are actual parameters
        cout<<"sum is: "<<sum(num1,num2)<<endl;
         return 0;
    }
   