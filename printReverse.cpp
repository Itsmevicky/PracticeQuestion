#include <bits/stdc++.h>

using namespace std;

void print(int num)
{
    if (num == 0)
        return;
    cout << (num % 10);
    print(num / 10);
}

int main()
{
    print(100);
}