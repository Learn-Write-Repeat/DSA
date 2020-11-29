#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter all "<<n<<" elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> duplicate;//a map to track the element and number of time it has appeared.
    for(int i=0;i<n;i++)
    {
        duplicate[arr[i]]++;// to increase the count of the particular element.
    }
    cout<<"The repeated elements are: ";
    for(auto x:duplicate)//traversing the map
    {
        if(x.second>1)// if count is greater than 1 print the element
        {
            cout<<x.first<<" ";
        }
    }
    return 0;
}
