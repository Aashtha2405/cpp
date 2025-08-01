//loop->for,while,do-while loops in c++
#include<iostream>
using namespace std;
int main(){
    int i=1;
   /*syntax FOR loop
    for(initialization;condition;updation)
    {
        loop body(c++ code)
    }*/ 
    for(i=0;i<4;i++){
        cout<<i<<endl;
    }

    /*syntax WHILE loop
    while(condition):
    {
        c++ statements;
    }*/

    //printing 1 to 40 using while loop
    while(i<=40){
        cout<<i<<endl;
        i++;
    }


    //do while loop syntax
    /*do
    {
    c++ statements;
    }while(condition)*/


    
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);

    return 0;
}