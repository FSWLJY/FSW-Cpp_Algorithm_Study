#include <iostream>
using namespace std;

class Person
{
public:
    // Person operator+(Person& p)//利用成员函数重载
    // {
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // }
    


    int m_A;
    int m_B;    


};


Person operator+(Person& p1, Person& p2)//利用全局函数重载
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}





void test01()
{
    Person p1, p2;
    p1.m_A = 10;
    p1.m_B = 20;
    p2.m_A = 30;
    p2.m_B = 40;
    Person p3 = p1 + p2;
    cout << "p3的A值为：" << p3.m_A << endl;
    cout << "p3的B值为：" << p3.m_B << endl;
    
}






int main()
{
    system("chcp 65001");
    
    test01();


    return 0;
}

