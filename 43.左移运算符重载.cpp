#include <iostream>
using namespace std;

class Person
{
public:
    int m_A;
    int m_B;



};

ostream& operator<<(ostream& cout,Person& p)//返回ostream& 因为不能创建副本，要返回引用，并且这样可以链式编程，若是void则不行
{
    cout << "m_A = " << p.m_A << endl;
    cout << "m_B = " << p.m_B << endl;
    return cout;
}

void test01()
{

    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;

    cout << p1 << "hello world" << endl;
}





int main()
{
    system("chcp 65001");
    test01();
    
    
    
    return 0;
}

