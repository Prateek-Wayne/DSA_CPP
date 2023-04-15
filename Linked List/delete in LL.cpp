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
struct Node *DeleteBeg(struct Node *head)
{
    struct Node *temp = head;
    head = head->next;
    delete (temp);
    return head;
}
struct Node *DeleteEnd(struct Node *head)
{
    struct Node *prevNode, *temp;
    temp = head;
    while (temp->next != NULL)
    {
        prevNode = temp;
        temp = temp->next;
    }
    prevNode->next = NULL;
    delete (temp);
    return head;
}
struct Node *DeletePos(struct Node *head, int Pos)
{
    struct Node *prevNode;
    struct Node *temp = head;
    int i = 1;
    while (i < Pos)
    {
        prevNode = temp;
        temp = temp->next;
        i++;
    }
    prevNode->next = temp->next;
    delete (temp);
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
    //    delete(temp);
}
int main()
{

    struct Node *head = new Node(45);
    struct Node *second = new Node(47);
    struct Node *third = new Node(48);
    struct Node *fourth = new Node(49);
    struct Node *fifth = new Node(50);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    Display(head);
    cout << "\n-----------\n";
    head = DeletePos(head, 3);
    Display(head);

    return 0;
}