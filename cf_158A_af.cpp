#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, count = 0, tmp = 0;
    int arr[51];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[k - 1] <= arr[i] && arr[i] > 0)
            count++;
    }
    if (tmp < 0)
        count = 0;
    cout << count - tmp;
    return 0;
}
