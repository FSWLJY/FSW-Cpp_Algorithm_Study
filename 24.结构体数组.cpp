#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int sorce;
};







int main()
{
    system("chcp 65001");
    Student stu[3] =
    {
        {"张三",18,90},
        {"李四",19,85},
        {"王五",20,92}
    };
    stu[2].name = "赵六";

    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << stu[i].name << " 年龄：" << stu[i].age << " 分数：" << stu[i].sorce << endl;
    }
    return 0;
}