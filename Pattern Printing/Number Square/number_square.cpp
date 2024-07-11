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
    for (int i = 0; i < 2*x-1; i++)
    {
        for (int j = 0; j < 2*x-1; j++)
        {
  int top = i;
  int left = j;
  int right  = (2*x - 2) - j;
  int down = (2*x - 2) - i;
  cout << (x - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
    
}