#include <iostream>
using namespace std;

class Student
{
    public:

    string m_name; //姓名
    int m_age; //年龄
    int m_score; //分数
    int m_id; //学号

    void printInfo()
    {
        cout << "姓名：" << m_name << endl;
        cout << "年龄：" << m_age << endl;
        cout << "分数：" << m_score << endl;
        cout << "学号：" << m_id << endl;
    }


    void setInfo(string name, int age, int score, int id)
    {
        m_name = name;
        m_age = age;
        m_score = score;
        m_id = id;
    }
};


   
int main()
{
    system("chcp 65001");

     Student s1;
    s1.setInfo("张三", 20, 80, 2019001);
    s1.printInfo();



    return 0;
}