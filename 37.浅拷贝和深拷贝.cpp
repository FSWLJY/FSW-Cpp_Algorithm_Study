#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {cout << "无参构造函数调用" << endl;}

    Person(int age,int height)
    {
        cout << "有参构造函数调用" << endl;
        m_age = age;
        m_height = new int(height);
    }
   

    Person(const Person &p)
    {
        cout <<"拷贝构造函数的调用" << endl;
        m_age = p.m_age;
        m_height = new int (*p.m_height);
    }

    ~Person()
    {
        if (m_height!= NULL)
        {
            delete m_height;
            m_height = NULL;
        }

    }
public:
    int m_age;
    int *m_height;

};

void test01()
{
    Person p1(18,182);
    Person p2(p1);
    cout << "p1的年龄为：" << p1.m_age << "  身高"<< *p1.m_height <<endl;
    cout << "p2的年龄为：" << p2.m_age << "  身高"<< *p2.m_height <<endl;
}

int main()
{
    system("chcp 65001");
    test01();



    return 0;
}