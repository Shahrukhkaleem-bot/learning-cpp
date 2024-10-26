#include <iostream>
using namespace std;

int main(){
    int a[100],n,max=0;
    cout<<"enter the number of students";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
cout<<"enter yhe marks of students"<<i+1<<endl;
cin>>a[n];
if (max<a[i])
{
    max=a[i];
    
}
    cout<<max;


    }
    

return 0;
}
