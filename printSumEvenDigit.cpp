#include <iostream>
using namespace std;

int main()
{
    int number = 4556;
    int sum = 0;
    while (number > 0)
    {
        int x = number % 10;
        if (x % 2 == 0)
        {
            sum += x;
        }

        number /= 10;
    }

    cout << sum << endl;
    return 0;
}

// output
// ans:- 10