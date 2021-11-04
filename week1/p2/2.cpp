/**
 *    Author: map
 *    Created: 2021-10-06   19:00:01
 *    Description: Binary search algorithm
**/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void binarySearch(int *arr, int target, int n)
{
    int left = 0, right = n - 1;
    int mid = 0, comparisons = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (target == arr[mid])
        {
            comparisons++;
            cout << "Present " << comparisons << '\n';
            break;
        }
        if (target < arr[mid])
        {
            comparisons++;
            right = mid - 1;
        }
        if (target > arr[mid])
        {
            comparisons++;
            left = mid + 1;
        }
    }
    if (left == right)
    {
        comparisons++;
        cout << "Not Present " << comparisons << '\n';
        return;
    }
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int testcases = 0;
    cin >> testcases;

    for (int t = 0; t < testcases; t++)
    {
        int n;
        cin >> n;

        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int target;
        cin >> target;

        binarySearch(arr, target, n);
    }
    return 0;
}