//using while
/*
#include<iostream>
using namespace std;



int main (void)
{
    int arr[]={2,5,8,9,13,18,56,68};
    int low=0; int high=7;
    int mid;
    int n=8;
    
    
    while(low<=high)
    {
        mid = (low+high)/2;
        
        if(n==arr[mid])
            break;
            
        if(n<arr[mid])
            high=mid-1;
            
        else
            low=mid+1;
            
            
            
     }
     
     
     if(low>high)
        cout<<"This number is not in the array!!"<<endl;
        
     else
        cout<<"The number is in the array and is in the "<<mid+1<<" th place "<<endl;
        
    
    
    return 0;
    
 }
 */
//using recursion

#include<iostream>
using namespace std;

int binarySearch(int *arr,int n,int low, int high )
{
   while(low<=high)
    {
       int mid = (low+high)/2;
        
        if(n==arr[mid])
            return mid;
            
        if(n<arr[mid])
            return  binarySearch(arr, n, low,mid-1);
            
        else
            return  binarySearch(arr, n,mid+1 ,high);
            
            
            
     }
     
     return -1;
    
    
}


int main (void)
{
    int arr[]={2,5,8,9,13,18,56,68};
    int low=0; int high=7;
    int mid;
    int n;
    
    cin>>n;
    int loc=binarySearch(arr,n,low,high);
    
    cout<<loc+1<<endl;
    
    
    
    return 0;
    
 }
 

