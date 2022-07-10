/**
 *    Author: map
 *    Created: 2021-10-06   18:46:44
 *    Description: Linear Search algorithm
**/

#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

void arrayInput(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void linearSearch(int *arr, int key, int size)
{
    for(int i = 0; i <= size; ++i)
    {
        if(key == arr[i])
        {
            cout << "Present " << i+1 << '\n'; // i + 1 comparisons for n elements traversed
            break;
        }
        if(i == size)
        {
            cout << "Not Present " << i << '\n';
        }
    }
}

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int size; 
        cin >> size;
        int arr[size];
        arrayInput(arr, size);

        int key;
        cin >> key;
        linearSearch(arr, key, size);
    }
    return 0;
}