#include <bits/stdc++.h>
using namespace std;
class Box
{
private:
    /* data */
    int length;
    int breadth;
    int height;

public:
    Box(int length = 0, int height = 0, int breadth = 0)
    {
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    }
    int getLength()
    {
        return length;
    }
    int getheight() {return height;}
    int getBreadth(){return breadth;}
    int getLength(){return length;}
    int CalculateVolume();
    bool operator<(Box b1)
    {
        if(length==b1.length && height==b1.height && breadth==b1.breadth)
            return true;
        return false;

    }
  
    ostream &operator<<(ostream &out, Box &B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
};

    
};
int Box::CalculateVolume()
{
    return length*breadth*height;
}

int main()
{
    return 0;
}