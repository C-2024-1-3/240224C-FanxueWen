#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "请输入x的值: ";
    cin >> x;
    double y;
    if (0 < x && x < 1) {
        y = 3 - 2 * x;
    }
    else if (1 <= x && x < 5) {
        y = 2 / (4 * x) + 1;
    }
    else if (5 < x && x < 10) {
        y = x * x;
    }
    else {
        cout << "输入的x不在定义域内";
        return 1;
    }
    cout << "y的值为: " << y << endl;
    return 0;
}