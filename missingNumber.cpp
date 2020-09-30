#include <bits/stdc++.h>
using namespace std;

void missingNumber(int arr[], int size)
{
    int sum = (size * (size + 1)) / 2;
    int missingNumber = 0;
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        sum -= arr[i];
        if (arr[i] == arr[i + 1])
        {
            i++;
            missingNumber = arr[i];
        }
    }
    cout << sum << " " << missingNumber << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1};
    int size = 5;
    missingNumber(arr, size);
}