#include <bits/stdc++.h>
using namespace std;
struct Result{
    int output[100];
};

int main(int argc, char const *argv[])
{
    Result rs = new Result;
    int resultWanted = 2;
    int arr[] = {198, 167, 135, 122};
    int arrlength = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+4, greater<int>());
    for (auto i = 0; i < 2; i++)
    {
        int temp = arrlength;
        rs->output[i] = arr[temp - 1];
        temp = temp - 1;
    }    

    cout << rs->output[0];
    cout << rs->output[1];
    return 0;
}
