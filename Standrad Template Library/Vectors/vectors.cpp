#include <bits/stdc++.h>

using namespace std;

void explainVectors();

int main()
{
explainVectors();
    return 0;
}

void explainVectors()
{
//     vector<int> v;
//     v.push_back(1);
//     v.emplace_back(2);

//     vector<pair<int, int>> vPair;
//     vPair.push_back({1, 2});
//     vPair.emplace_back(1, 2);

//     vector<int> vInt(5, 100);

//     vector<int> vEmpty(5);

// vector<int> vOrignal(5, 20);
// vector<int> vCopy(vOrignal);

// vector<int> vIterate;
// vIterate.push_back(10);
// vIterate.push_back(20);
// vIterate.push_back(30);
// vIterate.push_back(40);

// cout << v[0] << " " << v[1] << " " << v.back() << endl << endl;

// vector<int>::iterator it = vIterate.begin();
// cout << *(it) << " ";
// it++;
// cout << *(it) << " ";
// it = it + 2;
// cout << *(it) << " ";

// cout << endl << endl;

// vector<int>::iterator iit = vIterate.end();
// iit--;
// cout << *(iit) << " ";

// cout << endl << endl;;
// // vector<int>::iterator iiit = vIterate.rend();
// // vector<int>::iterator iiiit = vIterate.rbegin();

// for (vector<int>::iterator it = vIterate.begin(); it != vIterate.end(); it++)
// {
//     cout << *(it) << " ";
// }

// cout << endl << endl;

// for (auto it = vIterate.begin(); it != vIterate.end(); it++)
// {
//     cout << *(it) << " ";
// }

// cout << endl << endl;

// for(auto it : vIterate)
// {
//     cout << it << " ";
// }

// cout << endl << endl;

// vector<int> vDel;
// vDel.push_back(10);
// vDel.push_back(25);
// vDel.push_back(35);
// vDel.push_back(49);
// vDel.push_back(87);

// vDel.erase(vDel.begin()+1); // 25
// vDel.erase(vDel.begin() + 2, v.begin() + 4); // 35, 87

// cout << endl << endl;


vector<int> vInsert;
vInsert.push_back(10);
vInsert.push_back(20);
vInsert.push_back(30);
vInsert.push_back(40);
vInsert.push_back(50);

vInsert.insert(vInsert.begin(), 5); // {5, 10, 20, 30, 40, 50}
vInsert.insert(vInsert.begin()+2, 15); // {5,10,15,20,30,40,50}
vInsert.insert(vInsert.begin()+4, 25);// {5,10,15,20,25,30,40,50}
vInsert.insert(vInsert.begin()+6, 35);// {5,10,15,20,25,30,35,40,50}
vInsert.insert(vInsert.begin()+8, 45);// {5,10,15,20,25,30,35,40,45,50}

cout << endl;


vector<int> vCopy(2, 50);

vInsert.insert(vInsert.begin(), vCopy.begin(), vCopy.end()); // {50,50,5,10,15,20,25,30,35,40,45,50}

cout << endl;

vector<int> vSize(5,2); // 5

cout << endl;

vSize.pop_back(); // last element 5

cout << endl;

vector<int> v1;
vector<int> v2;

v1.push_back(10);
v1.push_back(20);
v2.push_back(30);
v2.push_back(40);

v1.swap(v2); // v1 = {30,40}, v2 = {10,20}

v1.clear(); // erase entire vector

cout << v1.empty(); // true

}