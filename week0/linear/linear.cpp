/**
 *    Author: map
 *    Created: 14-07-2021   14:26:50
**/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    cin >> n;

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at index : " << i;
            return 0;
        }
    }
    if (i == n)
    {
        cout << "Key not found in array!";
        return 0;
    }
}