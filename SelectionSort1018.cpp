#include<iostream>
using namespace std;

void selectionsort(int *arr,int n)
{
   int mini;
   
   for(int i=0;i<n;i++)
   {
     mini=i;
       for(int j=i+1;j<n;j++)
       {
            if(arr[mini]>arr[j])
            swap(arr[mini],arr[j]);
            
       }
    
   }


}

void printarray(int *arr,int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;/
        
    }
}


int main (void)
{
    int arr[]={45,76,34,23,90};
    int n=5;
    selectionsort(arr,n);
    printarray(arr,n);
    
    return 0;
    

 }
