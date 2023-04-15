#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n=image.size();
        int m=image[0].size();
        int current_color=image[sr][sc];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==current_color)
                    {
                        floodFillRec();
                    }

            }
        }
    }
bool isValid(vector<vector<int>>& image,int i,int j,int n, int m,int present_color,int new_color)
{
    if(i>=0 && j>=0 && i<n && j<m && image[i][j]==present_color)
    {
        return true;
    }
    return false;
}
void floodFillRec(vector<vector<int>>& image,int i,int j,int n,int m,int present_color,int new_color)
{   
    if(present_color==new_color)
        return;
    image[i][j]=new_color;
    isValid(image,i+1,j,n,m,present_color,new_color)
    {
        floodFillRec(image,i+1,j,n,m,present_color,new_color);
    }
    isValid(image,i,j+1,n,m,present_color,new_color)
    {
        floodFillRec(image,i,j+1,n,m,present_color,new_color);
    }
    isValid(image,i-1,j,n,m,present_color,new_color)
    {
        floodFillRec(image,i-1,j,n,m,present_color,new_color);
    }
    isValid(image,i,j-1,n,m,present_color,new_color)
    {
        floodFillRec(image,i,j-1,n,m,present_color,new_color);
    }

}
int main()
{
 return 0;
}