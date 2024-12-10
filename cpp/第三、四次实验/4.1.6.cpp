#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[])
{

    for (int i = 0; i < 26; i++)
    {
        counts[i] = 0;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            counts[ch - 'a']++;
        }
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char s[MAX_LENGTH];
    int counts[26];

    cout << "请输入一个字符串: ";
    cin.getline(s, MAX_LENGTH);

    count(s, counts);

    cout << "每个字母出现的次数如下: " << endl;
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
        {
            char ch = 'a' + i;
            cout << ch << ": " << counts[i] << endl;
        }
    }

    return 0;
}