#include <iostream>
using namespace std;
int linear(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
    
}

    



int main(){
    cout<<linear()<<endl;
return 0;
}
