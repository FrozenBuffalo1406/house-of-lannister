#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> romanNum = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};
        int num = 0;                         // 0 12 34 567
        for (int i = 0; i < s.length(); ++i) // M CM XC VII
        {
            if (i + 1 < s.length() && romanNum.find(s[i])->second < romanNum.find(s[i + 1])->second)
            {
                num -= romanNum.find(s[i])->second;
            }
            else
                num += romanNum.find(s[i])->second;
        }
        return num;
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    string s;
    cin >> s;
    cout << solution.romanToInt(s) << endl;

    return 0;
}
