#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int min_magic_uses(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> dp(n, vector<int>(n, numeric_limits<int>::max()));

    for (int i = 0; i < n; ++i)
    {
        dp[i][i] = max(0, -matrix[i][i]);
    }

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            dp[i][j] = min(dp[i][j - 1] + max(0, -matrix[i + j][j]),
                           dp[i + 1][j] + max(0, -matrix[i][i + j]));
        }
    }

    return dp[0][n - 1];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        int result = min_magic_uses(matrix);
        cout << result << endl;
    }

    return 0;
}