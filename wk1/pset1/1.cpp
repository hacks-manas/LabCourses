/**
 *    Author: map
 *    Created: 28-07-2021   14:33:11
 *    Description: find whether given key element is present in the array or not. 
 *    Also, find total number of comparisons for each input case
**/

#include <bits/stdc++.h>
using namespace std;

void linearSearch(int *arr, int count, int key)
{
    int k = 0;
    for (k = 0; k <= count; ++k)
    {
        if (key == arr[k])
        {
            cout << "Present " << k + 1 << "\n";
            break;
        }
        if (k == count)
        {
            cout << "Not Present " << k << "\n";
        }
    }
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arrayCount;
    cin >> arrayCount;

    for (int i = 1; i <= arrayCount; i++)
    {
        int count = 0;
        cin >> count;

        int arr[count] = {0};
        for (int j = 0; j < count; j++)
        {
            cin >> arr[j];
        }

        int key = 0;
        cin >> key;
        linearSearch(arr, count, key);
    }
    return 0;
}
