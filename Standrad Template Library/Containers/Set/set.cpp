#include <bits/stdc++.h>

using namespace std;

void explainSet();

int main()
{
explainSet();
    return 0;
}

void explainSet()
{
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); //{1, 2, 3, 4}

    // Functionality of insert in vectors
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty(), and swap() are same as others

    // {1. 2. 3. 4, 5}
    auto it = st.find(3); // returns it

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // returns end()

    // {1, 4, 5}
    st.erase(5); // erase 5

    int cnt = st.count(1); // retrun 1 if exist & 0 if not

    auto it = st.find(3);
    st.erase(it); // erase the element that it point to;

// {1, 2, 3, 4, 5}
auto it1 = st.find(3);
auto it2 = st.find(5);
st.erase(it1, it2); // erase elements between it1 & it2

// lower_bound() and upper_bound() function works in same way as in vector it does
// rest in same as vectors

auto it = st.lower_bound(2);
auto it = st.lower_bound(3);
}