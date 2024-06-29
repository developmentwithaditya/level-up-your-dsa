#include <bits/stdc++.h>

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
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << ("* ");
        }
        std::cout << "\n";
    }
}