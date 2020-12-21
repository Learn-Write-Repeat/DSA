#include <bits/stdc++.h>
using namespace std;

int n;

void selectionSort(int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[mini])
                mini = j;

        swap(arr[mini], arr[i]);
    }
}

int main()
{
    cout << "Enter size of Array: ";
    cin >> n;
    if (!n)
        return 0;
    int arr[n];
    cout << "Enter Numbers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}