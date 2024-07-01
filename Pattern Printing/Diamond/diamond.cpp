#include <iostream>

void print_Pattern(int x);
void print_Pattern_Inverted(int x);

int main()
{
    int row;
    std::cout << "Enter rows: ";
    std::cin >> row;
    print_Pattern(row);
    print_Pattern_Inverted(row);

    return 0;
}

void print_Pattern(int x)
{
     for (int i = 0; i < x; i++)
    {
        // Spaces
        for (int j = 0; j < x - i - 1; j++)
        {
            std::cout << " ";
        }
        // Stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            std::cout << "*";
        }
        // Spaces
        for (int l = 0; l <= x - i - 1; l++)
        {
            std::cout << " ";
        }
        std::cout << "\n";
    }
}

void print_Pattern_Inverted(int x)
{
    for (int i = 0; i < x; i++)
    {
        // Spaces
        for (int j = 0; j < i; j++)
        {
            std::cout << " ";
        }

        // Stars
        for (int k = 0; k < 2 * x - (2 * i + 1); k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";

        // Spaces
        for (int l = 0; l < i; l++)
        {
            std::cout << "";
        }
    }
}