//how to swap a value 
//to do this we should create another variable which will contain value of one variable in order to swaap them
#include <iostream>
using namespace std;
int main(){
   /* int a=5,b=10;
    int temporary=a;
    a==b;
    cout<<"the value of a is"<<b<<endl<<"the value of b is"<<temporary;*/
    int a=20,b=30;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the value of a is"<<a<<endl<<"the value of b is"<<b;
    return 0;
}