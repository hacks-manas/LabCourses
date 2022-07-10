/**
 *    Author: map
 *    Created: 14-07-2021   14:00:44
 *    Description: assuming array is sorted implement a binary search program
**/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int first = 0, last = n;
    int mid = 0;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (key == arr[mid])
        {
            cout << "Found at index : " << mid;
            return 0;
        }
        if (key < arr[mid])
        {
            last = mid - 1;
        }
        if (key > arr[mid])
        {
            first = mid + 1;
        }
    }
    cout << "Key not found !";
    return 0;
}