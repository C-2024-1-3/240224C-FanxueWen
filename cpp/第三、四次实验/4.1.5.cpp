#include <iostream>
#include <string>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    string str1(s1);
    string str2(s2);

    int pos = str2.find(str1);
    if (pos != string::npos) {
        return pos;
    }
    else {
        return -1;
    }
}

int main() {
    char s1[200];
    char s2[200];

    cout << "请输入第一个字符串：";
    cin >> s1;

    cout << "请输入第二个字符串：";
    cin >> s2;

    int result = indexOf(s1, s2);
    if (result == -1) {
        cout << s1 << " 不是 " << s2 << " 的子串" << endl;
    }
    else {
        cout << s1 << " 是 " << s2 << " 的子串，下标为 " << result << endl;
    }

    return 0;
}