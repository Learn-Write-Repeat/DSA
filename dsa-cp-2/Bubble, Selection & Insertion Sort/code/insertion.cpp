#include <bits/stdc++.h>
using namespace std;

int n;

void insertionSort(int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

    insertionSort(arr);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}