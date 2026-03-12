#include <iostream>
using namespace std;

class Person
{
public:
    void setName(string name) 
    { this->m_name = name; }
    string getname()
    {
        return m_name;
    }

    int getAge() 
    { return age; }

void setidol(string idol) 
{
    this->idol = idol;
}



private:
    string m_name;   //实现可读可写
    int age = 18;       //实现只读
    string idol;   //实现只写


};






int main()
{
    system("chcp 65001");

    Person p;
cout << "年龄：" << p.getAge() << endl;

    return 0;
}