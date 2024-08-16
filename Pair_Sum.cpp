#include <iostream>
using namespace std;

int countPairs(int N)
{

    return (N - 1) / 2;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << countPairs(N) << endl;
    }

    return 0;
}
