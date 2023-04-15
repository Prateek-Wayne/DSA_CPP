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
int main()
{
    struct Node *head = new Node(5);
    struct Node *second = new Node(7);
    struct Node *third = new Node(9);

    head->next = second;
    second->next = third;
    struct Node *temp = head;
    while (temp)
    {
        cout << temp->data << "|";
        temp = temp->next;
    }
    return 0;
}