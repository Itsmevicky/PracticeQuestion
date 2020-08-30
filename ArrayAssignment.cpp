#include <bits/stdc++.h>

using namespace std;
struct arrWrap
{
    int arr[100];
};

struct arrWrap
insert()
{
    struct arrWrap x;

    x.arr[0] = 10;
    x.arr[1] = 20;

    return x;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrWrap x = insert();
    cout << size;
    for (int i = 0; i < size; ++i)
    {
        cout << x.arr[i] << " ";
    }
}