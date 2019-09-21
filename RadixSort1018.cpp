#include<iostream>
using namespace std;

int Max(int *arr,int n)
{

    int mx=arr[0];
    
    for(int i=1;i<n;i++)
    
        if(arr[i]>mx)
            mx=arr[i];
            
            
            return mx;
            
   

}



void CountSort(int *arr,int n, int exp)
{
    
    int output[n]; int count[10] = {0};
    
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    
    
    for(int i=1;i<10;i++)
    {
        count[i]+=count[i-1];
    }
    
    
    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
        
    }
    
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
        
    }
   


}
void radix(int *arr , int n)
{
    int m= Max(arr,n);
    
    
    for(int exp=1; m/exp>0; exp*=10)
    {
         CountSort(arr,n,exp);
        
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
    int arr[]={34,675,341,32,90};
    int n=5;
    radix(arr,n);
    printarray(arr,n);
    
    return 0;
    

 }
 
 
