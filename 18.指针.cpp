//通过指针来保存一个地址
#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int a = 10;

    int * p;

    p = &a; // 指针指向a的地址

    cout << "a的地址为：" << &a << endl;
    cout << "p的地址为：" << p << endl;

    // *p 代表解引用 通过指针修改
    * p = 50; // 通过指针修改a的值

    cout << "a的值为：" << a << endl;
    cout << "p的值为：" << *p << endl;


    return 0;
}