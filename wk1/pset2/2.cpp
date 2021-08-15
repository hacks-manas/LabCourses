/**
 *    Author: map
 *    Created: 28-07-2021   15:00:04
 *    Description: Given an already sorted array of positive integers, 
 *                  design an algorithm and implement it using a program 
 *                  to find whether given key element is present in the array
 *                  or not. Also, find total number of comparisons for each input case.
**/

 #include <bits/stdc++.h>
using namespace std;
/*
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << array[i] << "\n";
    }
    cout << "\n";
}

int partition(int array[], int low, int high)
{
    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&array[i], &array[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(&array[i + 1], &array[high]);

    // return the partition point
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int part = partition(array, low, high);

        // recursive call on the left of pivot
        quickSort(array, low, part - 1);

        // recursive call on the right of pivot
        quickSort(array, part + 1, high);
    }
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    cin >> n;

    int arr[n];

    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "Number of comparisons : " << ; 
    return 0;
}
 */

int main(void)
{
    
}