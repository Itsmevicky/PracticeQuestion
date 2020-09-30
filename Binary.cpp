#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 10;
    int binaryNum[32];
    int i = 0;
    while (num > 0)
    {
        binaryNum[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
}