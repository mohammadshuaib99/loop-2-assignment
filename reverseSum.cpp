// WAP to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;

int main()
{
    int number = 21;
    int n = number;
    int reverse = 0;

    while (number > 0)
    {
        int x = number % 10;
        reverse = reverse * 10 + x;
        number /= 10;
    }
    int sum = n + reverse;
    cout << "Sum: " << sum << endl;

    return 0;
}
