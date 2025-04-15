#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // To handle the newline after reading 't'

    while (t--)
    {
        string inp;
        getline(cin, inp); // Read the entire line

        stringstream ss(inp); // Split the line into words
        string word;

        while (ss >> word)
        { // Extract each word
            if (!word.empty())
            {                    // Ensure the word is not empty
                cout << word[0]; // Print the first character
            }
        }
        cout << endl; // Newline after processing each test case
    }
    return 0;
}