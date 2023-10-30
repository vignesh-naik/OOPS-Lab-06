#include <iostream>
using namespace std;

class Temperature {
    double celsius;
public:
    Temperature(double c = 0)
    {
        celsius = c;
    }
    operator double() {
        return celsius *( 9.0 / 5.0) + 32.0;
    }
    void display()
    {
        cout << "Temperature in Celsius : " << celsius << endl;
    }
    void Fahrenheit(double f) {
        celsius = (f - 32.0) * 5.0 / 9.0;
    }
};

int main()
{
    int x;
    cout << "Enter temperature in celsius scale : ";
    cin >> x;
    Temperature temp(x);
    cout << "Given : \n";
    temp.display();
    double fahrenheit = temp;
    cout << "Temperature in Fahrenheit is : " << fahrenheit << endl;

    cout << "Enter temperature in Fahrenheit scale : ";
    cin >> x;
    cout << "Given :\n";
    temp.Fahrenheit(x);
    fahrenheit = temp;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    temp.display();
    return 0;
}
