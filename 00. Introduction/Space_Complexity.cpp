/* Space Complexity is a measure of the amount of memory space required 
//by an algorithm to run as a function of the size of the input data. 
//It is usually expressed in terms of Big O notation, w
/Which describes the upper bound of the growth rate of the
 space required by an algorithm as the input size increases. */



#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
    { arr[i] = i; } // space complexity is O(n)
    cin >> arr[n]; // space complexity is O(n)
}