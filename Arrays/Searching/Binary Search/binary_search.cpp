#include <iostream>

using namespace std;

int binary_Search(int arr[], int size, int key);

int main()
{
    int size, key;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Key to find: ";
    cin >> key;

    binary_Search(arr, size, key);

    return 0;
}

int binary_Search(int arr[], int size, int key)
{
    int s = 0, e = size, mid;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Founded at index of: " << i << endl;
        }
        else if (arr[i] >= key)
        {
            mid = (s + e) / 2;
            mid = e - 1;
        }
        else
        {
            mid = s + 1;
        }
    }
    return -1;
}