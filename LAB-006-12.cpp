
#include <iostream>
using namespace std;
class inch;
class feet
{
    int ft;
    public:
        feet()
        {
            cout << "Enter the measurement in feet: ";
            cin >> ft;
        }
        int get_ft()
        {
            return ft;
        }
        void display()
        {
            cout << "Feet = " << ft << " ft"<< endl;
        }
};
class inch
{
    int in;
    public:
        void display()
        {
            cout << "Inches = " << in << " in" << endl;
        }
        void operator = (feet &obj)
        {
            in = obj.get_ft() * 12;
        }
};
int main()
{
    feet f1;
    inch i1;
    i1 = f1;
    f1.display();
    i1.display();
}
