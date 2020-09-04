#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int gcdArray(int arr[], int size)
{
    int result = arr[0];
    for (int i = 1; i < size; i++)
    {
        result = gcd(result, arr[i]);
        if (result == 1)
            return 1;
    }
    return result;
}
int main()
{
    int arr[] = {5, 10, 20, 100};
    cout << gcdArray(arr, (sizeof(arr) / sizeof(arr[0])));
}