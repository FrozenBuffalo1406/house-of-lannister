#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int count = 0;
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
            tmp += arr[j];
        }
        if (tmp > 1)
        {
            count++;
        }
        tmp = 0;
    }
    cout << count << endl;

    return 0;
}
