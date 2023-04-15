// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int> v)
// {
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" hello";
//     }
//     cout<<"\n";
// }
// int main()
// {   //PAIRS
//     // pair<int,string> p;
//     // // p=make_pair(5,"abc");
//     // p={5,"abcd"};
//     // cout<<p.first<<" _"<<p.second;
//     // ---------------------------------------------------------
//     // pair<int,int>p_array[3];
//     // p_array[0]={1,2};
//     // p_array[1]={4,6};
//     // p_array[2]={10,11};
//     // swap(p_array[0],p_array[2]);
//     // for(int i=0;i<3;i++){
//     //     cout<<p_array[i].first<<"and"<<p_array[i].second<<endl;
//     // }
//     //-----------------------------------------------------------
//     //VECTORS(dynamic arrray)
//     vector<int> v;
//     for(int i=0;i<5;i++)
//     {
        
//         v.push_back(100+(i*8));
//     }
//     cout<<".............\n";
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     cout<<"v1::";
//     print(v);
//     // v.pop_back();
//     // print(v);
//     vector<int> v2=v;//O(n) time complexity
//     v2.pop_back();
//     v2.pop_back();
//     v2.pop_back();
//     cout<<"v2::";
//     print(v2);

// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int,string> p;
    // // p=make_pair(100,"abc");
    // p={5,"pbq"};
    // cout<<p.first<<" "<<p.second;
    // ........................
    // pair<int,int>p_arr[3];
    // p_arr[0]={1,-1};
    // p_arr[1]={2,-2};
    // p_arr[2]={3,-3};
    // swap(p_arr[0],p_arr[2]);
    // for(int i=0;i<3;i++){
    //     cout<<p_arr[i].first<<" "<<p_arr[i].second;

    // }
    vector<int>v;
    for(int i=0; i<10;i++)
    {
        v.push_back((100+i*2));
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"..";
    }
    cout<<endl;
    
    vector<int>&v2=v;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<"::";
    }
    cout<<v.capacity();
                                                                                                                                    