#include <bits/stdc++.h>

using namespace std;

void explainMultiset();

int main()
{
explainMultiset();
    return 0;
}

void explainMultiset()
{
    // Store duplicate elements
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 2}
    // ms.insert(2); // {1, 1, 2, 2}

    ms.erase(1); // all occurrence of 1 is erased
    int cnt = ms.count(1); // return occurrence of 1
    ms.erase(ms.find(1)); // only erase '1' occurrence of 1
    ms.erase(ms.find(1), ms.find(1+2));

    // rest is same as set
}