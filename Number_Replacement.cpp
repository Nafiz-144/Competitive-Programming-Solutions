#include <iostream>
#include <vector>
#include <unordered_map>

bool isValidTransformation(const std::vector<int> &originalValues, const std::vector<char> &transformedSymbols)
{
    if (originalValues.size() != transformedSymbols.size())
    {
        return false; // Unequal lengths, invalid transformation
    }

    // Use a map to store unique values and their corresponding symbols
    std::unordered_map<int, char> valueToSymbol;
    for (int i = 0; i < originalValues.size(); ++i)
    {
        int value = originalValues[i];
        char symbol = transformedSymbols[i];

        // Check if this value has already been seen
        if (valueToSymbol.count(value))
        {
            // If previous symbol doesn't match current symbol, invalid transformation
            if (valueToSymbol[value] != symbol)
            {
                return false;
            }
        }
        else
        {
            // Add value-symbol pair to the map
            valueToSymbol[value] = symbol;
        }
    }

    // All pairs passed the check, transformation is valid
    return true;
}

int main()
{
    // Example usage:
    std::vector<int> originalValues = {1, 2, 2, 3};
    std::vector<char> transformedSymbols = {'a', 'b', 'c', 'a'};

    if (isValidTransformation(originalValues, transformedSymbols))
    {
        std::cout << "Transformation is valid.\n";
    }
    else
    {
        std::cout << "Transformation is invalid.\n";
    }

    return 0;
}
