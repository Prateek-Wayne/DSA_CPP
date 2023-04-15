
#include <bits/stdc++.h>

using namespace std;
struct Node
{
  int data;
  struct Node *next;
    Node (int x)
  {
    data = x;
    next = NULL;

  }
};
void printLL (struct Node *head)
{
  Node *temp = head;
  while (temp)
    {
      cout << temp->data << endl;
      temp = temp->next;
    }

}
struct Node  *InsertAtBeg(Node *head,int data)
{
    struct Node *newNode=new Node(data);
    // newNode->next=head;
    newNode->next=head;

    head=newNode;
    return head; 
}
struct Node *InsertAtEnd(Node *head,int data)
{
    Node *temp=head;
    Node *newNode=new Node(data);
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}

struct Node *InsertAtAny(Node *head,int data,int pos)
{
  struct Node *temp=head;
  struct Node *newNode=new Node(data);
  int i=1;
  while(i<pos-1)
  {
    temp=temp->next;
    i++;
  }
  newNode->next=temp->next;
  temp->next=newNode; 
  return head;
}
struct Node *deleteHead(struct Node *head)
{
  head=head->next;
  return head;

}
struct Node *deleteEnd(struct Node *head)
{
  Node *temp=head;
  while(temp->next->next)
    temp=temp->next;
  temp->next=NULL;
  return head;
}
struct Node *deletePos(struct Node *head,int Pos)
{
  Node *temp=head;
  while(Pos>2)
  {
    temp=temp->next;
    Pos--;
  }
  temp->next=temp->next->next;
//   for(int i=2; i< Pos; i++) {
//   if(temp->next!=NULL) {
//     temp = temp->next;
//   }
// }

// temp->next = temp->next->next;
return head;

}
int main ()
{
  struct Node *head = new Node (5);
  struct Node *second = new Node (6);
  struct Node *third = new Node (7);
  head->next = second;
  second->next = third;
  printLL(head);
  cout<<"Inserting At begining \n";
  head=InsertAtBeg(head,55);
  printLL(head);
  cout<<"Insert at Ending\n";
  head=InsertAtEnd(head,40);
  printLL(head);
  cout<<"Insert at Position \n";
  head=InsertAtAny(head,27,2);
  printLL(head);
  cout<<"Delete At head\n";
  head=deleteHead(head);
  printLL(head);
  cout<<"delete At Pos\n";
  head=deletePos(head,3);
  printLL(head);
  return 0;
}
