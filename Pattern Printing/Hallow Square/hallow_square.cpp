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
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == 0 || j == 0 || i == x-1 || j == x-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }    
        }
        cout << endl;
    }
    
}