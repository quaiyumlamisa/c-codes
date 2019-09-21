#include<iostream>
using namespace std;

void merge(int *arr, int low ,int high, int mid)
{
    int i=low, j=mid+1, k=0,temp[high-low+1];
    
    while(i<=mid && j<= high)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            k++;
            i++;
            
        }
        
        
        
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
            
        }
       
     }
     
     while(i<=mid)
     {
        temp[k]=arr[i];
        k++;
        i++;
     }
     
     
     while(j<=high)
     {
        temp[k]=arr[j];
        k++;
        j++;
     }
     
     
     for(int i=low;i<=high;i++)
     {
        arr[i]=temp[i-low];
     }
     
     
   
}


void mergeSort(int *arr, int low, int high)
{  
   int mid;
   if(low<high)
    {
         mid=(low+high)/2;
        
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        
        merge(arr,low,high,mid);
        
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
    int arr[]={3,7,5,9,12,2};
    int n=6;
    
    mergeSort(arr,0,n-1);
    
    
    printArray(arr,n);
    
    return 0;
}
+
