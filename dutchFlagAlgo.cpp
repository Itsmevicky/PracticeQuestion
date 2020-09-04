#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {0, 0, 1, 2, 2, 0, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int low = 0;
    int mid = 0;
    int high = size - 1;

    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
}
