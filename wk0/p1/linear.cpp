/**
 *    Author: map
 *    Created: 14-07-2021   13:53:06
 *    Description: Assuming the input array is of random assortment, implement a linear search program
**/

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int arr[n] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    for(int i = 0; i < n;)
    {
        if(arr[i] == key)
        {
            cout << "Key found at index : " << i;
            return 0;
        }
        else
        {
            i++;
        }
    }
    cout << "Key not found !";
    return 0;
}