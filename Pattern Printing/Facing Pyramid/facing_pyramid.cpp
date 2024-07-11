#include <iostream>

using namespace std;

void print_Pattern(int x);

int main()
{
    int row;
    cout << "Enter rows: ";
    cin >> row;
    print_Pattern(row);

    return 0;
}

void print_Pattern(int x)
{
    int spaces = 2*x - 2;
    for (int i = 1; i <= 2*x - 1; i++)
    {
        int star = i;

        if (i > x)
        {
            star = 2*x - i;
        }

        // Stars
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }

        // Stars
        for (int l = 1; l <= star; l++)
        {
            cout << "*";
        }
        cout << endl;
        if(i < x) spaces -= 2;
        else spaces += 2;
    }
}