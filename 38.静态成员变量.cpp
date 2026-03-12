#include <iostream>
using namespace std;

class Person
{
    public:
        static int m_A;
        //特点：1，所有对象共享同一份数据。2，编译阶段就分配内存。3，需要类内声明，类外来进行初始化。

};
 int Person :: m_A = 100; //类外初始化

 void test01()
 {
    Person p1;
    cout << "p1的静态变量为：" << p1.m_A << endl;
 }

 int main()
 {
    system("chcp 65001");

    test01();


    return 0;
 }

