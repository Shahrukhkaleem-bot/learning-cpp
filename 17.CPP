#include <iostream>
using namespace std;
                             

int main(){
//     int n;
//     cin>>n;
//     int temp;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j =i+1; j < n; j++)
//         {
//             if (arr[j]<arr[i])
//             {
//             temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
    

// return 0;
// }
                                        // bubble sorting



    int n;
    cin>>n;
    int counter=1;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    while (counter<n)
    {
        for (int i = 0; i <n-1; i++)
        {
            if (arr[i]>arr[i+1])
            { 

                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            counter++;
            
        }
        for (int i = 0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }
    
    
    
return 0;
}