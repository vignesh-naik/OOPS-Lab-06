#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;
    public:
        Fraction(int numerator = 0, int denominator = 0)
        {
            this->numerator = numerator;
            this->denominator = denominator;
        }
        void display()
        {
            cout << numerator << "/" << denominator;
        }
        friend Fraction operator + (Fraction f1, Fraction f2);
};

Fraction operator + (Fraction f1, Fraction f2)
{
    if(f1.denominator == f2.denominator)
    {
        Fraction f3(f1.numerator + f2.numerator, f1.denominator);
        return f3;
    }
    else
    {
        Fraction f3((f1.numerator * f2.denominator)+(f2.numerator * f1.denominator), f1.denominator * f2.denominator);
        return f3;
    }
}
int main()
{
    int n1, d1, n2, d2;
    cout << "Enter Fraction 1 : \n";
    cout << "numerator : ";
    cin >> n1;
    cout << "denominator : ";
    cin >> d1;
    cout << "Enter Fraction 2 : \n";
    cout << "numerator : ";
    cin >> n2;
    cout << "denominator : ";
    cin >> d2;
    Fraction f1(n1, d1), f2(n2, d2);
    cout << "Addition of f1 and f2 : ";
    (f1 + f2).display();
}

