#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> heights[i];
    }

    int first_height = heights[0];
    int position = -1;

    for (int i = 1; i < N; ++i)
    {
        if (heights[i] > first_height)
        {
            position = i + 1; // Position is 1-indexed
            break;
        }
    }

    cout << position << endl;

    return 0;
}
