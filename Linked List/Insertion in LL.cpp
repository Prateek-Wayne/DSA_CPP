#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct Node *InsertatBeg(struct Node *head, int data)
{

    struct Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}
struct Node *InsertEnd(struct Node *head, int data)
{
    struct Node *newNode = new Node(data);
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    return head;
}
struct Node *InsertAtPos(struct Node *head,int data,int Pos)
{
    struct Node *newNode=new Node(data);
    struct Node *temp=head;
    int i=1;
    while(i<Pos)
    {
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}
void Display(struct Node *head)
{
    struct Node *temp = head;
    while (temp)
    {
        cout << temp->data << "|";
        temp = temp->next;
    }
}

int main()
{
    struct Node *head = new Node(5);
    struct Node *second = new Node(7);
    struct Node *third = new Node(9);
    head->next = second;
    second->next = third;
    Display(head);

    // head=InsertatBeg(head,10);
    cout<<"\n........\n";
    head = InsertEnd(head, 11);
    Display(head);
    cout<<"\n........\n";
    head = InsertAtPos(head, 101,2);
    Display(head);
    

    return 0;
}