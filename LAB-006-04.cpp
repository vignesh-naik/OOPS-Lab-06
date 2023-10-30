#include <iostream>
using namespace std;

class integer
{
    int x;
public:
    integer(int x = 0)
    {
        this->x = x;
    }
    integer(const integer &i)
    {
        x = i.x;
    }
    integer operator - ()
    {
        int tmp_int = -x;
        integer tmp(tmp_int);
        return tmp;
    }
    void display()
    {
        cout << "Integer is " << x << endl;
    }
};

int main()
{
    integer i(10);
    i.display();
    cout << "\n\n";
    cout << "After unary Minus : \n\n";
    integer i1 = -i;
    i.display();
    i1.display();
}
