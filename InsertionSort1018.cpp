#include<iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    int i,j,key;
    
    
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        
        while(j>=0 && arr[j]> key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        
        arr[j+1]=key;
        
    }
}


void printArray(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
   
}

int main(void)
{
    int arr[]={3,732,5,91,12,2};
    int n=6;
    
    insertionSort(arr,n);
    
    
    printArray(arr,n);
    
    return 0;
}

