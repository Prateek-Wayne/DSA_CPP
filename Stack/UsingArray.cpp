#include <bits/stdc++.h>
using namespace std;
struct MyStack
{
    int *arr;
    int capacity;
    int top;
    MyStack(int c)
    {
        capacity = c;
        arr = new int[capacity];
        top = -1;
    }
    void push(int n)
    {
        if (top == capacity - 1)
            cout << "*******Stack Oveflow******\n";
        else
        {
            top++;
            arr[top] = n;
            cout<<"Pushed element at "<<top+1<<" Position is: "<<arr[top]<<endl;
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "*******Stack Underflow*********\n";
        else
        {
            cout << "Poped element :=" << arr[top] << endl;
            top--;
        }
    }
    void peek()
    {
        if (top == -1)
            cout << "*******Stack Underflow********\n";
        else
        {
            cout << "Element at " << top+1 << " is:=" << arr[top] << endl;
        }
    }
};
int main()
{   

    MyStack S(5);
    S.push(2);
    S.push(4);
    S.push(6);
    S.push(8);
    S.push(10);
    S.push(10);
    S.peek();
    S.peek();
    S.pop();
    S.pop();
  
    
    return 0 ;
}