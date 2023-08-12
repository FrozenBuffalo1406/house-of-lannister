#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0;
    string word;
    cin >> word;
    int wordd;
    map<int, char> arr;
    for (int i = 0; i < word.length(); i++)
    {
        wordd = word[i];
        // cout << wordd << endl;
        arr[wordd] = word[i];
    }
    if (arr.size() % 2 != 0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}
