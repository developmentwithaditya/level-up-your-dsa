#include <bits/stdc++.h>

using namespace std;

void explainStack();

int main()
{
explainStack();
    return 0;
}

void explainStack()
{
    // LIFO
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout << st.top() << endl;
    st.pop(); // {4, 3, 2 ,1}
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}