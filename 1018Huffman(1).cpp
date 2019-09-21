#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    string  ch;
    Node *left,*right,*parent;

};
  Node *root;

int  Count=0;

void traverse(Node *temp)
{
   if(temp==NULL) return;

    cout << temp->ch << " "  <<temp->data<< " ";
    if(temp->parent!=NULL) cout << temp->parent->ch << " "  << temp->parent->data << endl;
    else cout << "Root" << endl;


    if(temp->left!=NULL ) traverse(temp->left);
    if(temp->right!=NULL ) traverse(temp->right);

}

int main (void)
{
    map<string,int>mm;

    map<string,int>::iterator it;

    string s;
    string a;


    getline(cin,s);

    for(int i=0;i<s.size();i++)
    {
        a=s[i];
        mm[a]++;
    }

    for(it=mm.begin();it!=mm.end();it++)
    {
        cout<<it->first <<" "<<it->second<<endl;
    }

    multimap<int,string>mp;
    multimap<int,string>::iterator it1;



     for(it=mm.begin();it!=mm.end();it++)
    {
       mp.insert ( pair<int,string> (it->second,it->first));
    }


    cout<<"\n"<<endl;

     for(it1=mp.begin();it1!=mp.end();it1++)
    {
        cout<<it1->first <<" "<<it1->second<<endl;
    }

    cout<<"\n"<<endl;

     vector<string> myvec;
     vector<string>::iterator it2;

       for(it1=mp.begin();it1!=mp.end();it1++)
      {
          myvec.push_back(it1->second);
       
       }
   

       cout<<"vector is : "<<endl;
       for( it2=myvec.begin();it2!=myvec.end();it2++)
       {
           cout<<*it2<<endl;
       }
     

       cout<<"\n"<<endl;
 

       multimap<string,Node*> mt;
       multimap<string,Node*> :: iterator it3;

       while(mp.size()>1)
       {
         Node *leftNode = new Node;
         Node *rightNode  = new Node;
         Node *parentNode = new Node;

         it1=mp.begin();
         
         it2=find(myvec.begin(),myvec.end(),it1->second);

         if(it2!=myvec.end())
         {
            leftNode->data=it1->first;
            leftNode->ch= it1->second;
            leftNode->parent=parentNode;
            leftNode->left=NULL;
            leftNode->right=NULL;

         }

        else
        {
            leftNode=(mt.find(it1->second))->second;
            leftNode->parent=parentNode;
           

        }

        mp.erase(it1);

        it1=mp.begin();
         
         it2=find(myvec.begin(),myvec.end(),it1->second);

         if(it2!=myvec.end())
         {
            rightNode->data=it1->first;
            rightNode->ch= it1->second;
            rightNode->parent=parentNode;
            rightNode->left=NULL;
            rightNode->right=NULL;

         }

        else
        {
            rightNode=(mt.find(it1->second))->second;
            rightNode->parent=parentNode;
           

        }


     mp.erase(it1);
 
     parentNode->left=leftNode;
     parentNode->right=rightNode;
     parentNode->data= leftNode->data+rightNode->data;
     parentNode->parent=NULL;

     stringstream ss;
	 ss << Count;
	 string cnv_str = ss.str();

	 parentNode->ch="im"+cnv_str;

	 Count++;

    
    
    
     mp.insert(pair<int,string>(parentNode->data,parentNode->ch));
     mt.insert(pair<string,Node*>(parentNode->ch,parentNode));

     root =parentNode;

       }

       
    cout<<"tree is : "<<endl;  //Constructing tree
    cout<<"\n"<<endl;
    traverse(root);
    
   return 0;
    }




