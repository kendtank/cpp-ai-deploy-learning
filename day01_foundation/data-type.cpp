#include <iostream>
using namespace std;

/*
 * C++ 基本数据类型概述:
 *
 * 整数类型:
 * - char: 字符类型，也可表示小整数, 1字节. 取值范围：-128 ~ 127（有符号）或 0 ~ 255（无符号）
 * - short 或 short int: 短整型, 2字节. 取值范围：-32,768 ~ 32,767
 * - int: 整型（最常用）, 4字节. 取值范围：-2,147,483,648 ~ 2,147,483,647
 * - long 或 long int: 长整型, 4或8字节（平台相关）. 取值范围与 int 相同或更大
 * - long long 或 long long int: 超长整型（C++11 引入）, 8字节. 取值范围：-9e18 ~ 9e18
 *
 * 浮点类型:
 * - float: 单精度浮点数, 4字节. 取值范围：±3.4e±38（约7位有效数字）
 * - double: 双精度浮点数, 8字节. 取值范围：±1.7e±308（约15位有效数字）
 * - long double: 扩展精度浮点数, 8或12或16字节（平台相关）. 更高精度
 *
 * 布尔类型:
 * - bool: 表示逻辑值, 1字节. 取值：true (1), false (0)
 *
 * 字符类型:
 * - char: 字符, 1字节. 示例：'A', '1', '@'
 * - wchar_t: 宽字符, 通常 2 或 4字节. 支持 Unicode（如 L'汉'）
 * - char8_t: UTF-8 字符（C++20 引入）, 1字节. 示例：'a', '中'（UTF-8 编码）
 * - char16_t: UTF-16 字符（C++11）, 2字节. 示例：u'中'
 * - char32_t: UTF-32 字符（C++11）, 4字节. 示例：U'中'
 *
 * void 类型:
 * - void: 表示“无类型”. 用于函数返回值、指针等
 *
 * 修饰符（Type Modifiers）:
 * - signed: 有符号（默认）
 * - unsigned: 无符号（只表示正数和零）
 * - short: 缩短长度
 * - long: 延长长度
 *
 * 固定大小整数类型（C++11 起）:
 * - 使用 <cstdint> 头文件中的类型：
 *   - int8_t / uint8_t: 有符号/无符号 8 位整数
 *   - int16_t / uint16_t: 16 位整数
 *   - int32_t / uint32_t: 32 位整数
 *   - int64_t / uint64_t: 64 位整数
 */



int main() {
    cout << "Size of char : " << sizeof(char) << " bytes" << endl;
    cout << "Size of short : " << sizeof(short) << " bytes" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of long : " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long : " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool : " << sizeof(bool) << " bytes" << endl;

    // 输出自己的基本信息:
    int age = 24;
    float height = 173.8;
    char sex = 'male';
    bool isStudent = TRUE;
    

    return 0;
}

/*
运行结果:
    Size of char : 1 bytes
    Size of short : 2 bytes
    Size of int : 4 bytes
    Size of long : 8 bytes
    Size of long long : 8 bytes
    Size of float : 4 bytes
    Size of double : 8 bytes
    Size of bool : 1 bytes
 */