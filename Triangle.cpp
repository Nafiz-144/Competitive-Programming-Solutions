#include <iostream>
#include <cmath>

using namespace std;

bool isRightTriangle(double a, double b, double c)
{

    double temp;
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    double epsilon = 1e-6;
    return abs(c * c - a * a - b * b) < epsilon;
}

int main()
{
    double s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    if (isRightTriangle(s1, s2, s3))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}