#include <iostream>
using namespace std;

class Person
{
    public:
        static void print()
            {cout << "I am a person." << endl;}
};

void test01()
{
    Person p;
    p.print();
    
    Person::print();
}
//并且可以利用静态成员函数去修改静态成员变量
int main()
{
    system("chcp 65001");
    test01();

    return 0;
}
