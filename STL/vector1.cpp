#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vector1;
    vector1.push_back(10);
    vector1.push_back(30);
    vector1.push_back(40);
    // ................................1
    // for(int i=0;i<vector1.size();i++)
    // {
    //     cout<<vector1[i]<<"  ";
    // }
    // // cout<<vector1.at(4);
    // cout<<vector1[4];
    // .................................2
     for(int &x:vector1)
     {   
         x=6;
     }
     for(int x:vector1)
     {
         cout<<x<<" " ;
     }

}