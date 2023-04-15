#include<bits/stdc++.h>
using namespace std;

// class Rectangle
// {
//     public:

//     int length;
//     int breadth;
//     int area()
//     {
//         return length*breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length+breadth);
//     }


// };
//constructors:
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    Rectangle()
    {
        length=0;
        breadth=0;
    }
    Rectangle(int l=0,int b=0)
    {
        setlength(l);
        setbreadth(b);
    }
    //Copy constructor
    Rectangle(Rectangle & rect)
    {
        setlength(rect.length);
        setbreadth(rect.breadth);
    }
    int area();

    int perimeter()
    {
        return 2*(length+breadth);
    }
    ~ Rectangle();
};
int Rectangle ::area()
{
    return length*breadth;
} 
Rectangle:: ~Rectangle()
{
    cout<<"destructor called\n";
}
int main()
{ 
   Rectangle r(6,6);
//    cout<<r.area()<<endl;
//    cout<<r.perimeter();
    Rectangle r2(r);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;

 return 0;
}