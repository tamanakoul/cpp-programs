#include <iostream>
using namespace std;

int main()
{
    int n,a = 0, b = 1, z = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << " " << a;
            continue;
        }
        if(i == 2)
        {
            cout << b << " ";
            continue;
        }
       z = a+b;
     a = b;
        b = z;
        
        cout << z << " ";
    }
    return 0;
}

