#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;

    }
};
struct MyStack
{
        Node *head;
        int size;
        MyStack()
        {
            head=NULL;
            size=0;
        }
        void push(int x)
        {
            Node *temp= new Node(x);
            temp->next=head;
            head=temp;
            size++;
        }
        void pop()
        {
            if(head==NULL)
                cout<<"Stack Underflow\n";
            else{
                Node *temp=head;
                while(temp->next)
                    temp=temp->next;
                Node *temp2=temp->next;
                cout<<"Data at last is: "<<temp2->data<<endl;
                delete(temp2);
                temp2->next=NULL;
                 }
        }
        void peek()
        {
            if(head==NULL)
                cout<<"Stack Underflow\n";
            else 
                cout<<"Data at last is: "<<head->data<<endl;
        }
};
int main()
{
 
 MyStack S;
 S.push(10);
 S.push(10);
 S.push(10);
 S.pop();

 return 0;
}