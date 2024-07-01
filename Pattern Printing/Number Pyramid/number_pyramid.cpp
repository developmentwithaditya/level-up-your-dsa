#include <iostream>

void print_Pattern(int x);

int main()
{
    int row;
    std::cout << "Enter rows: ";
    std::cin >> row;
    print_Pattern(row);
    
    return 0;
}

void print_Pattern(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}