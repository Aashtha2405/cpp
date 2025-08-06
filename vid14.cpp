//structure , unions, enums in c++
#include<iostream>
using namespace std;
    struct employee
    {
        /*data*/
        int eId;
        char favchar;
        float salary;
    };
    union money{
        //data
        int rice;
        char car;
        float pounds;

    };
    int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        struct employee Aastha;
        Aastha.eId = 1111;
        Aastha.favchar = 'H';
        Aastha.salary = 1200000000.50;
        // cout<<"Employee ID: "<<Aastha.eId<<endl;
        // cout<<"Favorite character:"<<Aastha.favchar<<endl;
        // cout<<"salaary:"<<Aastha.salary<<endl;
        return 0;
    }