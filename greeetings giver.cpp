#include <iostream>
using namespace std;
int main(){
    int time;
    cout<<"please enyter the time";
    cin>>time;
    if(time < 12){
        cout<<"Good Morning!";
    }
    else if(time<=15){
        cout<<"Good Afternoon!";
    }
    else if(time<=20){
        cout<<"Good Evening!";
    }
    else{
        cout<<"Good Night!";
    }
    
    

}
