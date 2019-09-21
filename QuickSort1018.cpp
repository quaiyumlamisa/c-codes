#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int low ,int high)
{
    int pivot = arr[high];
    int i=low-1;
    
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
          int t=arr[i];
          arr[i]=arr[j];
          arr[j]=t ;
         
          
          
          
        }
        
    }
    
  
    int s=arr[i+1];
    arr[i+1]= arr[high];
    arr[high]=s;
    
    return i+1;


}


void quickSort(int *arr, int low ,int high)
{
    if(low<high)
        {
         int p = partition(arr,low,high);
        
         quickSort(arr,low,p-1);
         quickSort(arr,p+1,high);
         }
        
     }



void printArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
 }


int main (void)
{
    int arr[]={5,2,623,100,31,4};
    int n=6;
    
    quickSort(arr,0,n-1);
    printArray(arr,n);
    
    return 0;
    
    }

 
