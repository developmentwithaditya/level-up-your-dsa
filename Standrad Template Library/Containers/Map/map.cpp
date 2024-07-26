#include <bits/stdc++.h>

using namespace std;

void explainMap();

int main()
{
    explainMap();
    return 0;
}

void explainMap()
{
    // Map store data in a {key, value}
    // Key should be uniqe but the value should be duplicated
    // Key will store in sorted order
    // key should be in any datatype

    map<int, int> mk_V;
    map<int, pair<int, int>> mk_VII;
    map<pair<int, int>, int> mkii_VI;

    mk_V[1] = 2;         // {key=1, value=2}
    mk_V.insert({3, 1}); // {key=3, value=1}
    mk_V.insert({2, 4}); // {key=2, value=4}

    mkii_VI[{2, 3}] = 10; // {key={2,3}, value=10}

    for (auto it : mk_V)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mk_V[1] << " "; // print {value=2}
    cout << mk_V[5] << endl; // prints 0 if not exist

    auto it = mk_V.find(3); // finding key "3"
    cout << *(it);

    auto iit = mk_V.find(5); // it points to after the map

    auto iiit = mk_V.lower_bound(2);
    auto iiiit = mk_V.upper_bound(3);

    // erase, swap, size, empty are same as vectors
}