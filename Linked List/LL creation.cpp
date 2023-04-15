#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
   struct Node *head=NULL;
   struct Node *first=new Node;
   struct Node *second=NULL;
   head=new Node;
//    first=new Node;
   second=new Node;
   head->data=1;
   head->next=first;
   first->data=4;
   first->next=second;
   second->data=5;
   second->next=NULL;
   struct Node *temp=head;
   while(temp!=NULL)
   {
    cout<<temp->data<<"|";
    temp=temp->next;
   }


    
    return 0;
}