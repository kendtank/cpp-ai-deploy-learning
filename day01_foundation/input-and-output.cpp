# include <iostream>
using namespace std;

int iput() { 
    // 键旁输入字符串
    cout << "请输入字符串：" << endl;
    string str;
    cin >> str;
    cout << "输入的字符串是：" << str << endl;
    return 0;
}

// cin >> 变量名：用于从用户输入中获取数据。
// >> 是提取运算符，将输入内容存入变量中。


// 多次输入
int iput2() {
    // 键旁输出字符串
    cout << "请输入第一次的字符串：" << endl;
    string str1;
    cin >> str1;
    cout << "请输入第二次的字符串：" << endl;
    string str2;
    cin >> str2;
    cout << "输入的字符串是：" << str1 << " " << str2 << endl;

    return 0;
}

int main() {
    iput2();
    return 0;
} 