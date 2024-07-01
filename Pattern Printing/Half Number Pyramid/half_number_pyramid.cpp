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
    int start = 1;
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            std::cout << start << " ";
            start = 1 - start;
        }
        std::cout << "\n";
    }
}