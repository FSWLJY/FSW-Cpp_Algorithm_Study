#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    system("chcp 65001");
    Student stu1 = {"张三", 20, 80};
    Student *p = &stu1;
    cout << "姓名：" << p->name << endl;
    cout << "年龄：" << p->age << endl;
    cout << "分数：" << p->score << endl;
    p->age = 25;




    return 0;       
}