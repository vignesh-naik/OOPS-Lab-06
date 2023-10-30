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
        void operator --()
        {
            --ascii;
            c = (char)ascii;
        }
        void operator --(int)
        {
            ascii--;
            c = (char)ascii;
        }
        void display()
        {
            cout << "The char is " << c << endl;
        }
};
int main()
{
    Char c1;
    --c1;
    c1.display();
    c1--;
    c1.display();
}
