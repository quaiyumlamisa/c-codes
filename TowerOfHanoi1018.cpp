#include<iostream>
using namespace std;

void tower(int n,char source,char auxilary,char destination)
{
    if(n==1)
      cout<<"move "<<source<<" to "<<destination<<endl;
      
    else
    {
        tower(n-1,source,destination,auxilary);
        tower(1,source,auxilary,destination);
        tower(n-1,auxilary,source,destination);
    }




}


int main(void)
{
 int n;
 cin>>n;
 
 tower(n,'S','A','D');
 
 return 0;

}
