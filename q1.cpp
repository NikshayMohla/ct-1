// Nikshay Mohla
// 2010990499
// Set-3
// q1
#include <iostream>
#include <algorithm>
using namespace std;
void rearr(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i - 1] > arr[i])
        {
            swap(arr[i - 1], arr[i]);
        }
        if (i + 1 < n && arr[i + 1] > arr[i])
        {
            swap(arr[i + 1], arr[i]);
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        rearr(arr, n);
        print(arr, n);
    }
}