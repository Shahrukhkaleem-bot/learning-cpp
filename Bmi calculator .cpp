#include <iostream>
using namespace std;
int main(){

    //making a bmi calculator
    int weight;
    cout<<"please Enter your weight=";
    cin>>weight;
    int height;
    cout<<"please enter your height=";
    cin>>height;
    if (weight/height<18.5)
    {
        cout<<"you are under weight";
    }
    else
    if (weight/height<=24.5&& weight/height>18.5)
    {
        cout<<"you are normal";
    }
    else
    cout<<"you are over weight";
    
    
}
