#include <bits/stdc++.h>

void print_Pattern(int x, int y);

int main()
{
    int row, col;
    std::cout << "Enter rows: ";
    std::cin >> row;
    std::cout << "Enter columns: ";
    std::cin >> col;
    print_Pattern(row, col);
    return 0;
}

void print_Pattern(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << ('*');
        }
        std::cout << "\n";
    }
}