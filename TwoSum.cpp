#include <bits/stdc++.h>

using namespace std;

void printPairs(int arr[], int size, int sum)
{
    unordered_set<int> map;
    for (int i = 0; i < size; i++)
    {
        int temp = sum - arr[i];
        if (map.find(temp) != map.end())
        {
            cout << arr[i] << " " << temp << endl;
        }
        map.insert(arr[i]);
    }
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8, 8};
    int n = 16;
    int size = sizeof(arr) / sizeof(arr[0]);

    printPairs(arr, size, n);
    return 0;
}