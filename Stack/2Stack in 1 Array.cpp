#include <bits/stdc++.h>
using namespace std;
struct Mystack
{
    int *arr;
    int top1, top2, capacity;
    Mystack(int n)
    {
        capacity = n;
        arr = new int[n];
        top1 = -1;
        top2 = capacity;
    }
    void push1(int x)
    {
        if (top1 < top2-1)
        {
            top1++;
            arr[top1] = x;
            cout << "Pushed element in Stack1:= " << arr[top1] << endl;
        }
        else if (top1 == top2)
        {
            cout << "******Stack Overflow Occured\n";
        }
    }
    void push2(int x)
    {
        if (top2-1 > top1)
        {
            top2--;
            arr[top2] = x;
            cout << "Pushed element in Stack2:= " << arr[top1] << endl;
        }
        else if (top2 == top1)
        {
            cout << "******Stack Overflow Occured\n";
        }
    }
    void pop1()
    {
        if (top1 == -1)
            cout << "******Stack Underflow" << endl;
        else
        {
            cout << "Poped element in Stack 1 is" << arr[top1] << endl;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == capacity)
            cout << "******Stack Underflow" << endl;
        else
        {
            cout << "Poped element in Stack 2 is" << arr[top2] << endl;
            top2++;
        }
    }
};
int main()
{
    Mystack S(7);
    S.push1(1);
    S.push2(0);
    S.push1(3);
    S.push2(2);
    S.push1(5);
    S.push2(4);
    S.push1(7);
    S.push2(7);
    S.push2(7);

    // S.push2(7);
    // S.push2(7);

    return 0;
}