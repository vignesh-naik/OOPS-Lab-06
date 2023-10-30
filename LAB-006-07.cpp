#include <iostream>
using namespace std;

class Array
{
    int *arr;
    int n;
public:
    Array(int x = 0)
    {
        n = x;
        arr = new int[n];
        cout << "Enter the numbers in the array : \n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }
    ~Array()
    {
        delete arr;
    }
    int & operator [] (int index)
    {
        if (index > n || index < 0)
        {
            cout << "Index Out of Array bound.\n";
            exit(0);
        }
        return arr[index];
    }
};
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    Array arr1(n);
    for(int i = 0; i < n; i++)
        cout << arr1[i] << endl;
}
