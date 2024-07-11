#include <iostream>
#include <set>
#include <string>

void process_requests(int n)
{
    std::set<std::string> existing_names;
    for (int i = 0; i < n; i++)
    {
        std::string name;
        std::cin >> name;
        if (existing_names.find(name) == existing_names.end())
        {
            existing_names.insert(name);
            std::cout << "OK\n";
        }
        else
        {
            int i = 1;
            std::string new_name = name + std::to_string(i);
            while (existing_names.find(new_name) != existing_names.end())
            {
                i++;
                new_name = name + std::to_string(i);
            }
            existing_names.insert(new_name);
            std::cout << new_name << "\n";
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    process_requests(n);
    return 0;
}