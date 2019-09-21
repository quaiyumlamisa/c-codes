//Binary tree


#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *left;
    Node *right;
    Node *parent;
};

int f=0;
 
int DeleteBoth(Node *temp)
{
    while(temp->left!=NULL)
    {
        temp=temp->left;
       
    }
    if(temp->right !=NULL)
    {
       
        Node *p,*r;
        r=temp->parent;
        p=temp->right;
        p->parent=r;
        r->left=p;
       
       
       
        

        return temp->data;
    }

    else
    {
      cout << temp->data<<endl;
      int q=temp->data;
  
      temp=temp->parent;
      
      
    if((temp->left)->data==q)
    {
     
      cout << temp->data << endl;
      temp->left=NULL;
            
    }

    else
    {
      temp->right=NULL;
      cout << temp->data << endl;
         
    }

    return q;

    }

}
  
 
 
 
void DeleteLeftNode(Node *temp)
{
    Node *tt,*c;


    c=temp->parent;
    tt=temp->left;
    tt->parent=c;
    
    if((c->left)->data==temp->data)
    {
         c->left=tt;
    }
    
    else if((c->right)->data==temp->data)
    {
        c->right=tt;
    }
}



void DeleteRightNode(Node *temp)
{
    Node *ss,*b;

9

    if((b->left)->data==temp->data)
    {
         b->left=ss;
    }
    
    else if((b->right)->data==temp->data)
    {
        b->right=ss;
    }



} 
 
 
 
void DeleteNode(Node *temp,int n)
{
      if(n==temp->data)
      {
       
        Node *s;
        s=temp->left;
        if(temp->left==NULL && temp->right==NULL)
        {
            Node *s;
            s=temp->parent;
            if( s->right ==temp )
            {
                s->right =NULL;
            }
            else
            {
                s->left =NULL;
            }
        }


        else if(temp->left!=NULL && temp->right==NULL)
        {
           
           DeleteLeftNode(temp);
        }

        else if(temp->left==NULL && temp->right!=NULL)
        {
            DeleteRightNode(temp);
        }
        else if(temp->left!=NULL && temp->right!=NULL)
        {
           
            int a= DeleteBoth(temp->right);
            temp->data=a;
         //   cout <<temp->data << " = data"<<endl;
            
        }


    }
    if(temp->left!=NULL)
         DeleteNode(temp->left,n);


    if(temp->right!=NULL)
        DeleteNode(temp->right,n);

   
}
 
  
 


  

void Insert(int num,Node *root)
{
     
        Node * temp=new Node;
        temp->data=num;
        temp->right=NULL;
        temp->left=NULL;
        temp->parent=NULL;
       
        Node *t=root;
        while(true)
        {
            if(num>=t->data)
            {
                if(t->right!=NULL)
                {
                    t=t->right;
                }
                
                else 
                {
                    t->right=temp;
                    temp->parent=t;
                    break;
                }
            }
            else
            {
                if(t->left!=NULL)
                {
                   t=t->left;
                }
                
                else
                {
                   t->left=temp;
                   temp->parent=t;
                   break;
                }
            }
        }
 }
 
int  search(Node *root,int y)
{

    if(y==root->data)
    {
        f=1;
     
        return f;
   
    }

    if(root->left!=NULL) search(root->left,y);
    if(root->right!=NULL) search(root->right,y);
   
} 


void preOrder(Node* root)
{
    cout << root->data << " ";
    if(root->left!=NULL) preOrder(root->left);
    if(root->right!=NULL) preOrder (root->right);
}
 
void inOrder(Node* root)
{
    
    if(root->left!=NULL) inOrder(root->left);
    cout << root->data << " ";
    if(root->right!=NULL) inOrder (root->right);
} 
 
 
 
void postOrder(Node* root)
{
   
    if(root->left!=NULL) postOrder(root->left);
    if(root->right!=NULL) postOrder (root->right);
    cout << root->data << " ";
}



int main ()
{

    Node* root=new Node;
    int num;
    cin >> num;
    root -> data=num;
    
    
    cin>>num;
    
    
    while(num!=0)
    {
       
       Insert(num,root);
       
       cin >> num;
    }
    
    
    
    while(1)
    {
     cout<<"What do you want to do?\n1.Insert\n2.Search\n3.Pre order Traversal \n4.In order Traversal\n5.Post Order Traversal  \n6.Delete  \n7.Exit"<<endl;
     
     int a;
     cin>>a;
     
     if(a==1)
     { 
       int n;
       cout<<"Which number do you want to insert?"<<endl;
       cin>>n;
     
       Insert(n,root);
     
     }
     
     else if(a==2)
     { 
        int m;
        cout << "Enter your number = ";
        cin >> m;
        
        
        int g= search(root,m);
        
        if(f==1)
          {
            cout <<"Found"<<endl;
          
          }
        else
          {
            cout << "Not Found" << endl;
          
          }
          f=0;
       
     }
     
     else if(a==3)
     {
       preOrder(root);
       cout<<"\n";
     }
     
   
     else if(a==4)
     {
       inOrder(root);
       cout<<"\n";
     }
     
     
     else if(a==5)
     {
       postOrder(root);
       cout<<"\n";
     }
     
     else if(a==6)
     {
      int n;
      cout<<"Which number do you want to delete? "<<endl;
      cin>>n;
      
      DeleteNode(root,n);
    
     }
    
     else if(a==7)
    
     break;


  }  
     
   return 0;
}
 
