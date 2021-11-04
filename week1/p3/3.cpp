/* /* *
 *    Author: map
 *    Created: 2021-10-06   19:01:37
 *    Description: jump search algorithm
**/

#include <bits/stdc++.h>
using namespace std;

void linearSearch(int *arr, int target,  int start, int end, int comparisons)
{
    for(int i = start; i <= end; ++i)
    {
        comparisons++; // i + 1 comparisons for n elements traversed
        if(target == arr[i])
        {
            cout << "Present " << comparisons << '\n'; 
            return;
        }
        if(i == end)
        {
            cout << "Not Present " << comparisons << '\n';
            return;
        }
    }
}

void jumpSearch(int *arr, int n, int target)
{
    int comparisons = 0, currentIndex = 0;

    while(arr[currentIndex] <= target && currentIndex < n)
    {
        /* Increment comparisons in every loop step */
        comparisons++;

        /* If target is found in jumps */
        if(arr[currentIndex] == target)
        {
            cout << "Present " << comparisons << "\n";
            return;
        }

        if(currentIndex >= n && (target > arr[currentIndex/2] && target < arr[n]))
        {
            linearSearch(arr, target, currentIndex/2, currentIndex, comparisons);
            return;
        }
        currentIndex = pow(2,comparisons);
    } 
    cout << "Not Present " << comparisons + 1<< '\n'; 
    
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
        jumpSearch(arr, n, target);
    }
    return 0;
} 