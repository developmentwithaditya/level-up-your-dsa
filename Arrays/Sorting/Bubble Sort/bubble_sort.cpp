#include <iostream>

using namespace std;

void bubble_Sort(int arr[], int size);

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
    
    bubble_Sort(unsorted_Array, size);
    return 0;
}

/**
 * @brief Bubble Sort function sorts an array of integers in ascending order.
 *
 * @param arr The array to be sorted.
 * @param size The size of the array.
 *
 * @return void. The function sorts the array in-place.
 *
 * @details The bubble sort algorithm works by repeatedly swapping adjacent elements
 *          if they are in the wrong order. The pass through the array is repeated
 *          until no more swaps are needed, indicating that the array is sorted.
 *
 * @note This implementation uses a counter to limit the number of passes through the array.
 *       This optimization reduces the time complexity of the algorithm.
 */
void bubble_Sort(int arr[], int size)
{
    int counter = 1;

    while (counter < size)
    {
       for(int i = 0; i < size-counter; i++)
       {
        if (arr[i] > arr[i+1])
        {
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
        }
       }
       counter++;
    }
    
    cout << "Your sorted array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
}