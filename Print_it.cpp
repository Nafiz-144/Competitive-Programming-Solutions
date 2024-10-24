/*#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, world! I am learning C programming language. ^_^ " << endl;
    cout << "Programming is fun and challenging. /\\/\\/" << endl;
    cout << "I want to give my 100% dedication to learn!    I will succeed one day." << endl;

    return 0;
}
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{

    long long n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            cout << i << endl;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}