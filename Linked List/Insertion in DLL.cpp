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
struct Node *InsertBeg(struct Node *head, int data)
{
    Node *newNode = new Node(data);
    head->prev = newNode;
    newNode->next = head;
    // head=newNode;
    return head;
}
struct Node *InsertEnd(struct Node *head, int data)
{
    Node *newNode = new Node(data);
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
struct Node *InsertAtPos(struct Node *head, int data, int Pos)
{
    struct Node *newNode = new Node(data);
    struct Node *temp = head;
    int i = 1;
    while (i < Pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    newNode->next->prev = newNode;

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
    Display(head);
    cout << "\n-----------------------\n";
    head = InsertAtPos(head, 15, 3);
    Display(head);
    return 0;
}