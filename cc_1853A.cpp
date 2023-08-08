#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int arr[500];
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (!is_sorted(arr, arr + n))
        {
            cout << 0 << endl;
            continue;
        }

        int subtract = arr[1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] < subtract)
            {
                subtract = arr[i] - arr[i - 1];
            }
        }
        cout << (subtract / 2 + 1) << endl;
    }

    return 0;
}
