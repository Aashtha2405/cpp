//basics input-output & more in C++
//c++ comes with libraries which helps us in performing input/output in c++ sequence of bytes corresponding to input and output are commonly knows as stream
//input stream and output stream


//input stream- direction of flow of bytes takes place from input input devices( for example-keyboard )to main memory


//output stream-direction of flow of bytes takes place from main memory to output device (for example-display)



#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter the value of num1: \n"; /*<< is called insertion operator*/
    cin>>num1; /*>> is called extraction operator */
    cout<<"Enter the value of num2: \n"; 
    cin>>num2;

    cout<<"sum of num1 and num2 "<<num1+num2;
    return 0;

}


//list of reserved keywords in c++ and by this keywords we can not create a variable with this name since they are used by language itself ,these keywords are available for re-definition or overloading.


