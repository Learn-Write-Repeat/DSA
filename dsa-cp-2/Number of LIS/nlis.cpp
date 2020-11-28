#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int size;

int num_lis()
{
    int l[size + 1], d[size + 1];
    int len_lis = 0, ans = 0;

    for (int i = 0; i <= size; i++)
        l[i] = d[i] = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && l[j] + 1 > l[i])
                l[i] = l[j] + 1, d[i] = d[j];
            else if (arr[i] > arr[j] && l[j] + 1 == l[i])
                d[i] += d[j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << l[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << d[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < size; i++)
        len_lis = max(l[i], len_lis);

    for (int i = 0; i < size; i++)
        if (l[i] == len_lis)
            ans += d[i];

    return ans;
}

int main()
{
    cout << "Enter size of Array: ";
    cin >> size;
    if (!size)
        return 0;
    cout << "Enter Numbers: ";
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int fans = num_lis();
    cout << fans << "\n";
    return 0;
}
