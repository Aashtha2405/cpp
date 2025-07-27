// c++ reference variables and typecasting
#include<iostream>
using namespace std;
int c = 67; //global variable
int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is:"<<c<<endl;
    cout<<"The global variable c is: "<<::c<<endl; //to yha hum scope resolution operator use kr skte h i.e :
    
    float d = 34.4F;
    long double e = 34.4L;
    cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is: "<<sizeof(34.4L)<<endl;


    return 0;
}