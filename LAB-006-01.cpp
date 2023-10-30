#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
        Complex(int real = 0, int imaginary = 0)
        {
            this->real = real;
            this->imaginary = imaginary;
        }
        void display()
        {
            if (imaginary < 0)
                cout << real << " " << imaginary << "i ";
            else
                cout << real << " + " << imaginary << "i ";
        }
        Complex operator + (Complex &c)
        {
            Complex add(real + c.real, imaginary + c.imaginary);
            return add;
        }
};
int main()
{
    int r1, i1, r2, i2;
    cout << "Enter Complex Number 1 : \n";
    cout << "Real Part : ";
    cin >> r1;
    cout << "imaginary Part : ";
    cin >> i1;
    cout << "Enter Complex Number 2 : \n";
    cout << "Real Part : ";
    cin >> r2;
    cout << "imaginary Part : ";
    cin >> i2;
    Complex c1(r1, i1), c2(r2, i2);
    cout << "Addition of c1 and c2 : ";
    (c1 + c2).display();
}
