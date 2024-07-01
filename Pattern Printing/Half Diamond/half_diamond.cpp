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
    for (int i = 1; i <= 2*x-1; i++)
    {
        int star = i;
      if(i > x) star = 2*x - i;
       for (int j = 1; j <= star; j++)
       {
        std::cout << "*";
       } 
       std::cout << "\n";
    }
}