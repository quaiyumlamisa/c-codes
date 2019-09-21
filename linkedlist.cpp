#include<iostream>
using namespace std;
struct node{
        int data;
        node *next,*previous;
};
node *head,*tail;
void createLinklist(){
      head=NULL;
      tail=NULL;
}
node* createNode(int DATA){

       node *temp;
       temp=new node;
       temp->data=DATA;
       temp->next=NULL;
       temp->previous=NULL;
       return temp;
}
void insertAtTheEnd(node *NODE){

     if(head==NULL && tail==NULL){
          head=NODE;
          tail=NODE;
     }
     else{
        NODE->previous=tail;
        tail->next=NODE;
        tail=NODE;
     }
}
void insertAtBegining(node *NODE){
     if(head==NULL && tail==NULL){
          head=NODE;
          tail=NODE;
     }
     else{
        NODE->next=head;
        head->previous=NODE;
        head=NODE;
     }
}
void printLinklistForward(){
    for(node *i=head;i!=NULL;i=i->next){
      cout<<i->data<<" ";
    }
    cout<<endl;
}
void printLinkListBackwar(){
    for(node *j=tail;j!=NULL;j=j->previous){
      cout<<j->data<<" ";
    }
    cout<<endl;
}
node* search(int item){
    for(node *i=head;i!=NULL;i=i->next)
    {
        if(i->data==item)
        {
            return i;
        }
    }
    cout<<"not found\n";
    return NULL;
}
void  insertAfterAnyValue(node *NODE,node *pre){

      NODE->previous=pre;
      NODE->next=pre->next;
      pre->next->previous=NODE;
      pre->next=NODE;

}
void deleteFromTheEnd(){
      tail=tail->previous;
      tail->next=NULL;
}
void deleteAtTheBegining(){
    head=head->next;
    head->previous=NULL;
}
void deleteAnyValue(node *NODE){
    node *NodeBeforeDeleteNOde=NODE->previous;
    node *NOdeAfterDeleteNode=NODE->next;
    NOdeAfterDeleteNode->previous=NodeBeforeDeleteNOde;
    NodeBeforeDeleteNOde->next=NOdeAfterDeleteNode;

}
void insertOperations(){
    createLinklist();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        node *newNode=createNode(input);
        insertAtTheEnd(newNode);
    }
    printLinklistForward();
    insertAtBegining(createNode(500));
    printLinkListBackwar();
    int s,i;
    cin>>i>>s;
    insertAfterAnyValue(createNode(i),search(s));
    printLinklistForward();
}
int main()
{
    insertOperations();
    deleteAtTheBegining();
    printLinklistForward();
    deleteFromTheEnd();
    printLinklistForward();
    int dlt;
    cin>>dlt;
    deleteAnyValue(search(dlt));
    printLinklistForward();
}
