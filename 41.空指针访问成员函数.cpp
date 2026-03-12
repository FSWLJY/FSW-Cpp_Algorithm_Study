#include <iostream>
using namespace std;

class Person
{
public:
    void ShowClassName()
    {
        cout << "Person" << endl;
    }
    void ShowAge()
    {
        if (this == NULL) //空指针访问成员函数
        {
            return;
        }
        
        cout << "Age: " << m_age << endl;
    
    }//默认是有this->m_age，由于创建了一个空指针，this也是空指针，并不指向任何实体。

    int m_age;
    
};

void test1()
{
    Person *p = NULL;
    p->ShowClassName(); // 空指针访问成员函数
    p->ShowAge();  
}

int main()
{
    system("chcp 65001");
    test1();

    
    
    return 0;
}