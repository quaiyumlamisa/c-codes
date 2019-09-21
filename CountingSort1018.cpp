#include<iostream>
using namespace std;



void CountSort(int *arr,int n)
{
    int output[n];int i;int count[10]={0};
    
    for(i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    
    
    for(int i=1;i<10;i++)
    {
        count[i]+=count[i-1];
    }
    
    for(i=n-1;i>=0;i--)
    {
    output[count[arr[i]]-1]=arr[i];
     count[arr[i]]--;
    }
    
    
    for(i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    
 }
void printarray(int *arr,int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
        
    }
}




int main (void)
{
    int arr[]={5,1,3,2,9};
    int n=5;
    CountSort(arr,n);
    printarray(arr,n);
    
    return 0;
    

 }
