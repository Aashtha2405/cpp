//if else and control structure
//c++ basic control structure
//1.sequence structure
//2.selection structure
//3.loop structure


//sequence structure
//entry-->action1-->action2-->exit



//selection structure
//entry-->and flow chart


//loop structure
//entry-->loop-->condition-->check true/false-->if true then again loop--->if false then-->exit

//if-else statement  //if-else  //switch case
//int i = 0;
//if(i<3){
    //cout<<i;
    //i++;
//}


//selection control structur
#include<iostream>
using namespace std;
int main(){
    // cout<<"This is tutorial-9";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    return 0;
}


//switch case statements
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;
    switch(age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
    default:
    cout<<"no speacial case"<<endl;
        break;
    }

    cout<<"done with switch case";
    return 0;
}


