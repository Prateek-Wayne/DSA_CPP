#include <bits/stdc++.h>
using namespace std;
vector<int> Spiral(vector<vector<int>> matrix, int r, int c)
{
    int Top = 0;
    int Left = 0;
    int Down = r - 1;
    int Right = c - 1;
    int dir = 0;
    vector<int> ans;
    while (Top <= Down && Left <= Right)
    {
        if (dir == 0)
        {
            for (int i = Left; i <= Right; i++)
            {
                ans.push_back(matrix[Top][i]);
            }
            Top++;
        }
        if (dir == 1)
        {
            for (int i = Top; i <= Down; i++)
            {
                ans.push_back(matrix[Right][i]);
            }
            Right++;
        }
        if (dir == 2)
        {
            for (int i = Right; i >= Left; i--)
            {
                ans.push_back(matrix[Down][i]);
            }
            Down--;
        }
        if (dir == 3)
        {
            for (int i = Down; i >= Top; i--)
            {
                ans.push_back(matrix[i][Left]);
            }
        }
        dir = (dir + 1) % 4;
    }
    return ans;
}
vector<int> spiralOrder(const vector<vector<int> > &A) {
    
    int T,B,L,R,dir;
    T=0;
    B=A.size()-1;
    L=0;
    R=A[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    // vector<int> New = spiralOrder(matrix);
    vector<int> New = Spiral(matrix,3,3);
    for (auto i : New)
    {
        cout << i << "|";
    }

    return 0;
}