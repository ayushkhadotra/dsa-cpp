#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i += 3) // time complexity is O(n/3) which is O(n)
    {
        if (i == n - 1)
        {
            cout << "Reached the value of n: " << n << endl; // time complexity is O(n)
        }
    }

    for (int i = 0; i < 5 * n; i += 4) // time complexity is O(5*n/4) which is O(n)
    {
        cout << "This loop runs 5*n times." << endl; // time complexity is O(n)
    }

    if (n > 0)
    {
        for (int i = 0; i < m; i += n) // time complexity is O(m/n) which is O(m)
        {
            cout << "This loop runs m/n times." << endl; // time complexity is O(m)
        }
    }

    // Overall time complexity is O(n + m)

    if (m > 0)
    {
        for (int i = 0; i < n * n; i += m) // time complexity is O(n^2/m) which is O(n^2)
        {
            cout << "This loop runs n*n/m times." << endl; // time complexity is O(n^2)
        }
    }

    // Overall time complexity is O(n^2 + m)

    if (m > 1)
    {
        for (int i = 1; i < n; i *= m) // time complexity is O(log_m(n)) which is O(log(n))
        {
            cout << "This loop runs log_m(n) times." << endl; // time complexity is O(log(n))
        }
    }

    return 0; 

}