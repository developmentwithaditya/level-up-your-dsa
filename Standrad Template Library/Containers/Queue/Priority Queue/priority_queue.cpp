#include <bits/stdc++.h>

using namespace std;

void explainPriorityQueue();

int main()
{
    explainPriorityQueue();
    return 0;
}

void explainPriorityQueue()
{
    priority_queue<int> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << endl; // {10}
    pq.pop();                 // {10}
    cout << pq.top() << endl; // {8}

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pqq;
    pqq.push(5);     // {5}
    pqq.push(2);     // {2, 5}
    pqq.push(8);     // {8, 5, 8}
    pqq.emplace(10); // {2, 5, 8, 10}

    cout << pqq.top() << endl; // {2}

    // size, swap, empty function same as other
}