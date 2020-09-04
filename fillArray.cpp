#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> arr;
    for (int i = 97; i <= 122; i++)
    {
        arr.push_back(char(i));
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}