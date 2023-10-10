#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer for n." << endl;
        return 1;
    }

    long long a = 0, b = 1;
    cout << "First " << n << " Fibonacci numbers:" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}
