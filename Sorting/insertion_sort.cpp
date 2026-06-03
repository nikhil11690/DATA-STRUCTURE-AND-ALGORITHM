// Problem statement
// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.

//  Note:
// Change in the input array/list itself. You don't need to return or print the elements.

void insertionSort(int input[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = input[i];
        int j = i - 1;

        while(j >= 0 && input[j] > key)
        {
            input[j + 1] = input[j];
            j--;
        }

        input[j + 1] = key;
    }
}
