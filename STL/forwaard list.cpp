#include <forward_list>
#include <iostream>
using namespace std;
int main()
{
    forward_list<int> list1 = {5, 10, 15}; // another way of intitialization;
    forward_list<int> list2;
    list2.assign({2, 4, 6, 8});
    list1.push_front(2);

    list1.push_front(1);
    list1.pop_front();
    for (int x : list1)
    {
        cout << x << ".";
    }
    cout << endl;
    // another way of for loop;
    for (auto(it) = list2.begin(); it != list2.end(); it++)
    {
        cout << *(it) << ".";
        // iterator it is a address to object of container;😑
    }
    cout<<endl;
    //.......................................
    //another function insert_after()
    forward_list<int>list3={10,15,20};
    //pass an iterator
    auto (it)=list3.insert_after(list3.begin(),101);
    //list3 becomes 10.101.15.20
    (it)=list3.insert_after(it,list1.begin(),list1.end());
    //list3 becomes 10.101.2.5.10.15.15.20.
    it=list3.erase_after(it);
    //list3 becomes 10.101.2.5.10.15.20.
    for(auto i:list3)
    {
        cout<<i<<".";
    }
    cout<<endl;
    list3.reverse();
    for(auto i:list3)
    {
        cout<<i<<".";
    }
    cout<<endl;
    list3.merge(list2);
    for(auto i:list3)
    {
        cout<<i<<".";
    }
    cout<<"endl";
    for(auto i:list2)
    {
        cout<<i<<".";
    }
    list3.sort();
    for(auto i:list3)
    {
        cout<<i<<"..";
    }
}