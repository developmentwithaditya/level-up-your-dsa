#include <bits/stdc++.h>

using namespace std;

void explainQueue();

int main()
{
explainQueue();
    return 0;
}

void explainQueue()
{
    // FIFO
    queue<int> q;
    q.push(1); // {1}
    q.emplace(2); // {1, 2}
    q.back() += 2; // {2+2 = 4}

    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop(); // {1}
    cout << q.front() << endl;

    // rest is same as stacks
    // swap, empty, size
}