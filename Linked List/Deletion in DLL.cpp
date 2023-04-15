#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
struct Node *DeleteBeg(struct Node *head)
{
    struct Node *temp = head;
    head = head->next;
    head->next->prev = head;
    delete (temp);
    return head;
}
struct Node *DeleteEnd(struct Node *head)
{
    struct Node *temp1 = head;
    while (temp1->next!=NULL)
        temp1 = temp1->next;
    temp1->prev->next=NULL;
    delete(temp1);
    return head;
  
}
struct Node *DeleteAtPos(Node *head,int Pos)
{
    struct Node *temp=head;
    int i=1;
    while(i<Pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete(temp);
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
    struct Node *fourth = new Node(11);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = NULL;
    Display(head);
    cout << "\n----------------------\n";
    // head = delLast(head);
    head=DeleteAtPos(head,3);
    Display(head);
    return 0;
}