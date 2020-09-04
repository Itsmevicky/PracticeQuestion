#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, b);
}

long long lcm(int arr[], int size)
{
    long long ans = arr[0];
    for (int i = 1; i < size; i++)
    {
        ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
    }
    return ans;
}

int main()
{
    int arr[] = {4, 5, 6, 7};
    cout << lcm(arr, (sizeof(arr) / sizeof(arr[0])));
}