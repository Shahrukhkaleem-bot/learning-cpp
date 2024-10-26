#include <iostream>
using namespace std;

int main(){
    int n,m,z;
    cout<<"Enter no of rows";
    cin>>n;
    cout<<"Enter no of coloums";
    cin>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < m; j++)
    {
        cin>>a[i][j];
    }

    
    }
    cout<<"the martrix is="<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            z=a[i][j];
            cout<<z<<" ";

        }
        cout<<endl;
        
    }
    
    
return 0;
}