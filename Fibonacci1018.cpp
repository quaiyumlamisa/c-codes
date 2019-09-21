//using normal loop

/*
#include<iostream>
using namespace std;


int main (void)
{
    int n, first =0, second =1,next;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<first;
        next=first+second;
        first=second;
        second=next;
     }   
 return 0;
    
top
 }
 */
 //using recursion
 #include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0|| n==1)
        return n;
        
    else
        return(fibonacci(n-1)+fibonacci(n-2));
        
}



int main (void)
{
    int i=0,n;
    
    cin>>n;
    
    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
 return 0;
    

 }
