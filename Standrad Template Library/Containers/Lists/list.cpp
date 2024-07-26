#include <bits/stdc++.h>

using namespace std;

void explainList();

int main()
{
explainList();
    return 0;
}

void explainList()
{
    list<int> li;
    li.push_back(2); // {2}
    li.emplace_back(4); // {2, 4}
    li.push_front(8); // {5, 2, 4}
    li.emplace_front(16); // {0,5,2,4};

// rest functions is same as vectors
// begin, end, rbegin, rend, clear, insert, size, swap
}