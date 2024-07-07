#include <iostream>

using namespace std;

void selection_Sort(int arr[], int size);

int main()
{
    int size;
    int unsorted_Array[size];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
    {
        cin >> unsorted_Array[i];
    }
    
    selection_Sort(unsorted_Array, size);
    return 0;
}

/**
 * @brief Sorts an array of integers in ascending order using the Selection Sort algorithm.
 *
 * @param arr The array to be sorted.
 * @param size The size of the array.
 *
 * @return void
 *
 * @details The Selection Sort algorithm works by repeatedly finding the minimum element from
 *          unsorted part and putting it at the beginning. The algorithm maintains two subarrays
 *          in a given array.
 *          1) The subarray which is already sorted.
 *          2) Remaining subarray which is unsorted.
 *
 * @note The time complexity of this algorithm is O(n^2) in all cases.
 *
 * @warning This function modifies the original array.
 */
void selection_Sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Your sorted array: " << arr[i] << " ";
    }
    cout << endl;
}