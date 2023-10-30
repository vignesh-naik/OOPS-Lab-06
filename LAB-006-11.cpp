#include <iostream>
using namespace std;

class Array
{
    int arr[10];
    int n;
    public:
        Array(int n = 10)
        {
            this->n = n;
            cout << "Enter the array numbers: \n";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
        }
        int sum()
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
                sum += arr[i];
            return sum;
        }
        int operator > (Array &obj1)
        {
            if (sum() > obj1.sum())
                return 1;
            else
                return 0;
        }
        int operator < (Array &obj1)
        {
            if (sum() < obj1.sum())
                return 1;
            else
                return 0;
        }
        int operator >= (Array &obj1)
        {
            if (sum() >= obj1.sum())
                return 1;
            else
                return 0;
        }
        int operator <= (Array &obj1)
        {
            if (sum() <= obj1.sum())
                return 1;
            else
                return 0;
        }
};

int main()
{
    int n;
    cout << "Enter the size of array to be comapared : ";
    cin >> n;
    Array obj1(n), obj2(n);
    if (obj1 > obj2)
        cout << "obj1 > obj2 == True\n\n";
    else
        cout << "obj1 > obj2 == False\n\n";
    if (obj1 < obj2)
        cout << "obj1 < obj2 == True\n\n";
    else
        cout << "obj1 < obj2 == False\n\n";
    if (obj1 >= obj2)
        cout << "obj1 >= obj2 == True\n\n";
    else
        cout << "obj1 >= obj2 == False\n\n";
    if (obj1 <= obj2)
        cout << "obj1 <= obj2 == True\n\n";
    else
        cout << "obj1 <= obj2 == False\n\n";
}
