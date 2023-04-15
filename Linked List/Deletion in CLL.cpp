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
Node *DeleteBeg(Node *head)
{
    struct Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = head->next;

    delete (head);
    return temp->next;
}
Node *DeleteEnd(Node *head)
{
    Node *temp = head;
    while (temp->next->next!=head)
    {
        temp = temp->next;
    }
    Node *temp2 = temp->next;
    delete (temp2);
    temp->next = head;
    return head;
}
Node *DeleteAtPos(Node *head,int Pos)
{
    Node *temp=head;
    int i=1;
    while(i<Pos-1)
    {
        temp=temp->next;
        i++;
    }        
   Node * temp2=temp->next;
    temp->next=temp->next->next;
    delete(temp2);
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
    cout << "\n-----------------\n";
    head = DeleteAtPos(head,3);
    Display(head);
    return 0;
}