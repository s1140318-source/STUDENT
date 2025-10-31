#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int num1, num2;

    // 輸入名字
    cout << "請輸入你的名字: ";
    cin >> name;
    cout << "你好, " << name << "!" << endl;

    // 輸入兩個數字
    cout << "請輸入兩個數字, 用空白隔開: ";
    cin >> num1 >> num2;
    cout << "你輸入的是: " << num1 << " 和 " << num2 << endl;

    return 0;
}