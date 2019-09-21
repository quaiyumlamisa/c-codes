#include<iostream>
using namespace std;

int n,arr[10][10],visited[10];

void dfs(int i)
{
  int j;
  cout<<i<<endl;
  
  visited[i]=1;
  
  for(j=0;j<n;j++)
  {
    if(!visited[j] && arr[i][j]==1)
    {
      dfs(j);
    }
  }
  
}




int main (void)
{

 int i,j;
 cout<<"Enter number of vertices: "<<endl;
 
 cin>>n;
 
 for(i=0;i<n;i++)      
 {
    for(j=0;j<n;j++)
    {
      cin>>arr[i][j];     // input adjacency matrix
    }
 }
 
 for(i=0;i<n;i++)
 {
    visited[i]=0;
    
 }
 
 
 dfs(0);
 
 
 }
