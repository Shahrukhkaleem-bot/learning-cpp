#include <iostream>
using namespace std;

int main(){
    int a[100],n, max = 0;
    cout<<"Enter number of students in class : ";
    cin>>n;
    for (int i = 0; i<n; i++)
    {
        cout<<"Enter marks of student "<<i+1<<" : ";
        cin>>a[i];
        if(max<a[i]){
            max = a[i];
        }
    }
    
    cout<<max;
return 0;
}