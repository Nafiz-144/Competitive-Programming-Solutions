#include <iostream>
using namespace std;

void work()
{
    int n, k;
    cin >> n >> k;

    // Calculate the sum of numbers from (n-k+1) to n
    int total_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

    // Check if the sum is even or odd and output the result
    if (total_sum % 2 == 0)
        cout << "YES\n"; // Even sum
    else
        cout << "NO\n"; // Odd sum
}

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        work();
    }
    return 0;
}
