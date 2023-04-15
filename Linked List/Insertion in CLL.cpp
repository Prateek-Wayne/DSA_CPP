#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next = NULL;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *InsertBeg(Node *head, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);
    while (temp->next != head)
    {
        temp = temp->next;
    }
    // newNode->next=temp->next;
    // temp->next=newNode;
    temp->next = newNode;
    newNode->next = head;
    head = head->next;
    // newNode=newNode->next;
    return newNode;
}
Node *InsertEnd(Node *head,int data)
{
    Node *temp=head;
    Node *newNode=new Node(data);
    while(temp->next!=head)
        temp=temp->next;
    temp->next=newNode;
    newNode=head;
    return head;
}
Node *InsertAtPos(Node *head,int data,int Pos)
{
    Node *temp=head;
    Node *newNode=new Node(data);
    int i=1;
    while(i<Pos-1)
    {
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}
void Display(Node *head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << "|";
        temp = temp->next;
    }
    cout << temp->data;
}
int main()
{

    struct Node *head = new Node(5);
    struct Node *second = new Node(10);
    struct Node *third = new Node(15);
    struct Node *fourth = new Node(20);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;
    Display(head);
    cout << "\n-------------\n";
    head = InsertAtPos(head, 25,3);
    Display(head);

    return 0;
}