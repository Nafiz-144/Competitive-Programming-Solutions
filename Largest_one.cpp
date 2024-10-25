#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    
    int c = A + B;
    int d= A - B;
    int e = A * B;

    
    int max_result = max({c, d, e});

    
    cout << max_result << endl;

    return 0;
}
