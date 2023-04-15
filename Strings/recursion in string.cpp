#include<bits/stdc++.h>
using namespace std;


string reverse(string s,int i,int j)
{
    if(i>j)
        return s;
    swap(s[i],s[j]);
    i++;
    j--;
    s=reverse(s,i,j);
}
void subset(int index,vector<int>& nums,vector<int> output,vector<vector<int>> ans)
{
    //Base condition
    if(index > nums.size())
    {   
        ans.push_back(output);
        return;
    }
    //exclude PArt
    subset(index+1,nums,output,ans);
    //include part;
    int element=nums[index];
    subset(index,nums,output,ans);
    output.push_back(element);

}
   vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> output;
        subset(index,nums,output,ans);
        return ans;
    }
int main()
{  

    // string s="abcdef";
    // s=reverse(s,0,s.length()-1);
    // cout<<s;
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=subsets(nums);
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums[i].size();i++)
            cout<<nums[i][j]<<" ";
    }
 return 0;
}