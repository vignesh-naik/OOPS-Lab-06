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
    friend istream & operator >> (istream &in, integer &i);
    friend ostream & operator << (ostream &out, integer &i);
};
istream & operator >> (istream &in, integer &i)
{
    cout << "Enter the number : ";
    in >> i.x;
    return in;
}
ostream & operator << (ostream &out, integer &i)
{
    out << "The integer is " << i.x;
    return out;
}
int main()
{
    integer i;
    cin >> i;
    cout << i;
}
