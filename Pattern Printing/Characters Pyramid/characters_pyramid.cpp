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
    for (int i = 0; i < x; i++)
    {
        // Spaces
        for (int j = 0; j < x - i - 1; j++)
        {
            std::cout << " ";
        }

        // Characters
        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            std::cout << ch << " ";
           if(k <= breakpoint) ch++;
           else ch--;
        }

        // Spaces
        for (int l = 0; l < x - i - 1; l++)
        {
            std::cout << " ";
        }
        std::cout << "\n";
    }
}