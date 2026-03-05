#include <iostream>
using namespace std;
#include <string>

struct student {
    string name;
    int age;
    int grade;
};



struct teacher {
    int id;
    string name;
    int age;
    struct student stu;




};



int main(){
    system("chcp 65001");

    teacher t1;
    t1.id = 1001;
    t1.name = "张老师";
    t1.age = 40;
    t1.stu.name = "李四";
    t1.stu.age = 18;
    t1.stu.grade = 90;
    cout << "教师信息：" << endl;
    cout << "ID: " << t1.id << endl;    
    cout << "姓名: " << t1.name << endl;
    cout << "年龄: " << t1.age << endl;
    cout << "学生信息：" << endl;
    cout << "姓名: " << t1.stu.name << endl;
    cout << "年龄: " << t1.stu.age << endl;
    cout << "分数: " << t1.stu.grade << endl;
     return 0;
}