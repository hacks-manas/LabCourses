/**
 *    Author: map
 *    Created: 28-07-2021   16:00:00
 *    Description: For an array arr[n], search at the indexes 
 *    arr[0], arr[2], arr[4] , ... , arr[2^k] and so on. Once 
 *    the interval (arr[2^k] < key < arr[2^k+1] ) is found, 
 *    perform a linear search operation from the index 2^k to find the element key 
**/

#include <bits/stdc++.h>
using namespace std;

void jumpSearch(int *arr, int arraySize, int key)
{
    if (key < arr[2])
    {
        for (int i = 0; i <= 2; i++)
        {
            if (key == arr[i])
            {
                cout << "Found at index :" << i;
                break;
            }
        }
    }

    else
        for (int i = 2; i <= arraySize; i = pow(i, 2))
        {
            int lowCap = i;
            int highCap = i * 2;

            if (highCap > arraySize)
                highCap = arraySize;

            if (key > lowCap && key < highCap)
            {
                for (int j = lowCap; j <= highCap; j++)
                {
                    if (key == arr[j])
                    {
                        cout << "Index at :" << j;
                        break;
                    }
                    if (j == highCap)
                    {
                        cout << "Not found !";
                        break;
                    }
                }
            }
        }
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCases = 0;
    int sizeArray = 0;
    int key = 0;

    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        cin >> sizeArray;
        int array[sizeArray];

        for (int i = 0; i < sizeArray; i++)
        {
            cin >> array[i];
        }
        cin >> key;
        jumpSearch(array, sizeArray, key);
    }
    return 0;
}