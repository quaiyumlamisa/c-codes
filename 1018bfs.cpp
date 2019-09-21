#include<iostream>
using namespace std;

int a,b,i,j,k,e,arr[10][10],q[10],front,rare,brr[10],crr[10];
 
int main(void)
{


cout <<"Enter number of vertices :\n";
cin >> b;

cout <<"Enter number of edges :\n";
cin >> a;

cout <<"Connected edges are: \n";

for(k=1;k<=a;k++)
{
  cin >>i>>j;
  arr[i][j]=1;
  
}
 
cout <<"Select starting vertex : "<<endl;
cin >>e;


cout << e << " ";

brr[e]=1;   //visited 

k=1;

while(k<b)
{
  for(j=1;j<=b;j++)

   if(arr[e][j]!=0 && brr[j]!=1 && crr[j]!=1)
   {
       crr[j]=1;
       q[rare++]=j;
   }
   
   
      e=q[front++];
   
   
      cout<<e << " ";
      k++;

      crr[e]=0;
      brr[e]=1;
}


return 0;
}
  
   
   
   
   
