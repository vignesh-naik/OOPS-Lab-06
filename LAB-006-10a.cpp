#include <iostream>
using namespace std;

class Char
{
    char c;
    int ascii;
    public:
        Char()
        {
            cout << "Enter the character : ";
            cin >> c;
            ascii = (int)c;
            cout << "The character is : " << c << endl;
        }

        void display()
        {
            cout << "The char is " << c << endl;
        }
        friend void operator --(Char &obj);
        friend void operator --(Char &obj, int);
};
void operator --(Char &obj)
{
    --obj.ascii;
    obj.c = (char)obj.ascii;
}
void operator --(Char &obj, int)
{
    obj.ascii--;
    obj.c = (char)obj.ascii;
}
int main()
{
    Char c1;
    --c1;
    c1.display();
    c1--;
    c1.display();
}
