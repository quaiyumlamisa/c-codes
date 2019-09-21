#include<iostream>
using namespace std;


int main (void)
{

int arr[]={5,1,3,2,9};
    int n=5;
    
    int swapped=0;
    
    for(int i=0;i<n;i++)
    {
        swapped=0;
        
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=1;
            
        }
        
        if(swapped==0)
            break;
     }
     
            
    for(int i=0;i<n;i++)
        {
           cout<<arr[i]<<endl;
        }



 return 0;
    

 }
