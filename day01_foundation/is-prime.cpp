#include<iostream>
using namespace std;

bool isPrime(int number){

    // 键盘输出一个数字, 判断这个数字是不是质数
    // 质数：大于1的自然数，除了1和它本身外，不能被其他自然数整除的数。
    
    // 1. 大于1的自然数
    if (number <= 1){
        return false;
    }
    // 2. 大于1, 且除了1和本身外, 不能被其他自然数整除的数。
    for (int i = 2; i < number; i++){
        if (number % i == 0){
            return false;
        }
    }
    return true;
    
}



int main()
{
    int number;
    cout << "请输入一个数字：" << endl;
    cin >> number;
    bool ret = isPrime(number);

    // 这里判断是不是质数
    if (ret){
        cout << "是质数" << endl;
    }
    else{
        cout << "不是质数" << endl;
    } 
}
