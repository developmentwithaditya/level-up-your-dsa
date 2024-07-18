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
    int spaces = 2 * (x - 1);

    for (int i = 0; i < x; i++)
    {
        // Numbers
        for (int j = 0; j < i; j++)
        {
            std::cout << j;
        }
        // Spaces
        for (int k = 0; k < spaces; k++)
        {
            std::cout << " ";
        }
        // Numbers
        for (int j = 0; j < i; j++)
        {
            std::cout << j;
        }
        std::cout << "\n";
        spaces -= 2;
    }
}
