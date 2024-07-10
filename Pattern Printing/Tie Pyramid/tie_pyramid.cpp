#include <iostream>

using namespace std;

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
    int space = 0;

    for (int i = 0; i < x; i++)
    {
        // Stars
        for (int j = 1; j <= x - i; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        // Stars
        for (int l = 1; l <= x - i; l++)
        {
            cout << "*";
        }

        space += 2;
        cout << endl;
    }

    space = 8;

    for (int i = 1; i <= x; i++)
    {
        // Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        // Stars
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }

        space -= 2;
        cout << endl;
    }
}