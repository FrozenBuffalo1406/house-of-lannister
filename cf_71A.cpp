#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string *word = new string[100];
    char *chara = new char[100];
    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }
    for (int i = 0; i < n; i++)
    {
        int len = word[i].length();
        strcpy(chara, word[i].c_str());
        if (len > 10)
        {
            cout << chara[0] << len - 2 << chara[len - 1] << endl;
        }
        else
        {
            cout << chara << endl;
        }
    }
    delete[] chara;
    delete[] word;
    return 0;
}
