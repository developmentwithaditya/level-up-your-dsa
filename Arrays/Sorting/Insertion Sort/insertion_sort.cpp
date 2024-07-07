#include <iostream>

using namespace std;

void Insertion_Sort(int arr[], int size);

int main()
{

    /* Insertion Sorting -
                        Insert an element from  unsorted array to its correct position in sorted array.
    */

    int size;
    int unsorted_Array[size];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
    {
        cin >> unsorted_Array[i];
    }

    Insertion_Sort(unsorted_Array, size);
    return 0;
}

void Insertion_Sort(int arr[], int size)
{
    /**
     * @brief Performs the insertion sort algorithm on the given array.
     *
     * @details The insertion sort algorithm works by iterating through the array,
     *          and for each element, it finds the correct position to insert it in
     *          the sorted portion of the array. It compares the current element with
     *          the elements in the sorted portion and shifts them to the right if
     *          necessary. This process continues until the current element is in its
     *          correct position.
     *
     * @note The time complexity of the insertion sort algorithm is O(n^2) in the
     *       worst case, where n is the size of the array. It is efficient for small
     *       arrays or partially sorted arrays.
     **/

    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
    cout << "Your sorted array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
