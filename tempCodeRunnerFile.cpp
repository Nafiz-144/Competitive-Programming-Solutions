#include <iostream>
#include <vector>
#include <cmath> // For std::abs

using namespace std;

// Function to calculate the minimum number of operations to make all diagonal elements non-negative
int calculate_operations(const vector<vector<int>> &matrix, int n)
{
    int operations = 0;

    // Traverse only the main diagonal (i == j)
    for (int i = 0; i < n; ++i)
    {
        if (matrix[i][i] < 0)
        {
            operations += abs(matrix[i][i]); // Count the operations needed to make it non-negative
        }
    }

    return operations;
}

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n; // Read the matrix dimension

        vector<vector<int>> matrix(n, vector<int>(n));

        // Read the matrix
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        // Calculate and print the result for this test case
        cout << calculate_operations(matrix, n) << endl;
    }

    return 0;
}
