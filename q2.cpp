// Nikshay Mohla
// 2010990499
// Set-3
// q2
// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
#include <bits/stdc++.h>

using namespace std;

void pairSum(int arr[], int n, int target)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp = target - arr[i];

        if (s.find(temp) != s.end())
        {
            cout << "Pair found " << arr[i] << " " << temp << endl;
        }
        s.insert(arr[i]);
    }
    cout << "Pair Not Found" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int target;
        cin >> target;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        pairSum(arr, n, target);
    }
    return 0;
}
