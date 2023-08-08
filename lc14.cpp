#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    vector<string> strs;
    string input;
    while (cin >> input)
    {
        strs.push_back(input);
    }
    cout << solution.longestCommonPrefix(strs) << endl;
    return 0;
}
