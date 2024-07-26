#include <bits/stdc++.h>

using namespace std;

void explainSorting();

int main()
{
    explainSorting();
    return 0;
}

void explainSorting()
{
    // arr[] = {1, 5, 3, 2, 4};
    sort(arr, arr + 5);     // this will sort the arr. arr is begining & arr+4 is right after 4 element
    sort(arr + 2, arr + 4); // this will only sort arr from {3 to 4}

    // v = {3,6,4,9,0,1}
    sort(v.begin(), v.end()); // this will sort the v
    sort(v.begin(), v.end()); // this will sort in descending order

    // sort it according to second element
    // if second element is same, then sort according to the first element but in descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    sort(a, a + n, comp) // comp is a self written comperetor
    // {{4,1}, {2,1}, {1,2}}
}

// here how to write self comperetor

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // if the above conditions are true the comperetor is internaly swap them

    // if they are same

    if (p1.first > p2.first)
        return true;
    return false;
}