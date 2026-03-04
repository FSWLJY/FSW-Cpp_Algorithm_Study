#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int a = 10;
    const int *p1 = &a; // 指向常量的指针
    //常量指针  指针本身是常量，指针的值不能修改，但指针指向的内容可以修改
    int b =20;
    p1 = &b;
    cout << "p1指向的值为：" << *p1 << endl;
    

    int * const p2 = &a; // 常量指针
    //常量指针  指针本身是常量，指针的值
    //不能修改，但指针指向的内容可以修改
    *p2 = 30; // 修改指针指向的内容
    cout << "p2指向的值为：" << *p2 << endl;
    
    return 0;
}