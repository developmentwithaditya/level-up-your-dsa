#include <bits/stdc++.h>

using namespace std;

void explainPair();

int main()
{
	explainPair();
	return 0;
}

void explainPair()
{
	pair<int, int> pairIs = {1, 2};
	cout << pairIs.first << " " << pairIs.second << endl;

	// Nested pairs

	pair<int, pair<int, int>> nestedPairIs = {1, {2, 3}};
	cout << nestedPairIs.first << " " << nestedPairIs.second.first << " " << nestedPairIs.second.second << endl;

	// Pairs of array

	pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
	cout << arr[0].first << endl;
}