#include <iostream>
using namespace std;

class integer
{
    int digits;
public:
    integer(int x = 0)
    {
        digits = x;
    }
    integer(const integer &i)
    {
        digits = i.digits;
    }
    integer operator ++ ()
    {
        int tmp_digits = ++digits;
        integer tmp(tmp_digits);
        return tmp;
    }
    integer operator ++ (int)
    {
        int tmp_digits = digits++;
        integer tmp(tmp_digits);
        return tmp;
    }
    void display()
    {
        cout << "Integer is " << digits << endl;
    }
};
int main()
{
    integer i1(10), i2(12), i3(14), i4(16);
    i1.display();
    i2.display();
    i3.display();
    i4.display();
    cout << "\n\n";
    ++i1;
    i2++;
    integer i5 = ++i3;
    integer i6 = i4++;
    i1.display();
    i2.display();
    i3.display();
    i4.display();
    i5.display();
    i6.display();
}
