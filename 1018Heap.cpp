//Heap



#include<iostream>
using namespace std;


int tt,rt,c=0;



void PrintInDecendingOrder(int *arr,int i)
{
            int tt=0;

            rt=i;
          
            int l=2*rt+1;
            int r=2*rt+2;
            if(r>c)
            {
                return ;
            }
           
           if(arr[rt]<arr[l])
           {
               


               swap(rt,l);
           }

            if(arr[rt]<arr[r])
           {

               swap(rt,r);
              
           }
           if(i!=rt)
           {
               tt=1;
               swap(arr[i],arr[rt]);

           }
           
           if(tt==1)
            {

               PrintInDecendingOrder( arr,rt);
            }

}

void func1(int *arr,int i)
{
  
   while(i>0)
    {

       

        if(i%2==0)
        {

            int r;
            r=i;
            
            rt=(r-2)/2;
           

            if(arr[rt]<arr[i])
            {
                swap(arr[rt],arr[i]);
                i=rt;
            }
            
            
            else
            {
              break;
            }
              


        }
        else
        {
            
            int l;
            l=i;
            
            rt=(l-1)/2;
         

            if(arr[rt]<arr[i])
            {
                swap(arr[rt],arr[i]);
                i=rt;
            }
            
            else
            {
               break;
            }


         }
       
    }


}



void Insert(int *arr)
{
    while(tt>0)
    {


        
        if(tt%2==0)
        {

           
           int num=tt;
           
           rt=(num-2)/2;
           

            if(arr[rt]<arr[tt])
            {
                swap(arr[rt],arr[tt]);
                tt=rt;
            }
            else
                break;
              


        }
        else
        {
          
            
           int num=tt;
           
            rt=(num-1)/2;
         
            if(arr[tt]>arr[rt])
            {
                swap(arr[rt],arr[tt]);
                tt=rt;
            }
            else
            {
             break;
            }


        }
      

    }
}
int main()
{
    int arr[100],i=0,s=1;
    int num,n;


    cin>>n;   //4
    arr[i]=n; //arr[0]=4
    i++;     //i=1
    
    
    
    while(n!=0)
    {
        cin>> n;   //6
        arr[i]=n;  //arr[1]=6
        i++;       //i=2

        func1(arr,i-1); //(1)


    }
    c=i-1;
    
    
    
    for(int j=0; j<c; j++)
    
        cout << arr[j]<< " ";

    

    cout <<  endl;

    while(true)
    {
        cout <<"\nWhat do you want to do?\n1.Insert\n2.Print In Decending Order\n3.Exit" <<endl;
        int a;
        cin>> a;


        if(a==1)
        {
            cout << "Enter your number : ";
            int t;
            cin >> t;
            arr[c]=t;

            tt=c;
            cout <<  " " << arr[c] << endl;

            Insert(arr);
            c++;
        }
        
        
        
        else if(a==2)
        {
            c--;

            while(c!=0)
            {
                cout << arr[0]<< " " ;
                arr[0]=arr[c];
                arr[c]=0;
                 
                PrintInDecendingOrder(arr,0);
                c--;
            }
            
            
            cout << arr[0]<<endl;



        }
       
       

        else if(a==3)
            break;
    }

    return 0;
}


            
           
