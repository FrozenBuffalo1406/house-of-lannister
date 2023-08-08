#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int maxx = 1, curr = 1;
        int *arr = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);

        for (int j = 1; j < n; j++)
        {
            if (arr[j] - arr[j - 1] > k)
            {
                maxx = max(maxx, curr);
                curr = 1;
            }
            else
            {
                curr++;
            }
        }
        maxx = max(maxx, curr);
        cout << n - maxx << endl;
    }

    return 0;
}