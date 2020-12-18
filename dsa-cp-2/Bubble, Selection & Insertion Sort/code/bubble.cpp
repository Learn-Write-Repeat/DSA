#include <bits/stdc++.h>
using namespace std;

int n;

void bubbleSort(int arr[])
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
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

    bubbleSort(arr);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}