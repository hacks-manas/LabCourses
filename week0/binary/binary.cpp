/**
 *    Author: map
 *    Created: 14-07-2021   14:46:37
 *    Description: Binary sort on sorted array
**/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[100] = {0};

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key = 0;
    cin >> key;

    int first = 0, middle = 0, last = 0;

    last = n;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (arr[middle] < key)
        {
            first = middle + 1;
        }
        else if (arr[middle] == key)
        {
            cout << "Key found at index:" << middle + 1;
            break;
        }
        if (arr[middle] > key)
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
    }
    if (first > last)
    {
        cout << "Key is absent from the array !";
    }
    cout << "\n";
    return 0;
}