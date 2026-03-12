#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {this->age = age;} //this指针第一作用：避免重名的问题，解决名称的冲突
   
   
    Person& add1(const Person &p)//为什么要用引用的方式返回呢？因为引用返回的直接是返回了对象本身，而不是拷贝对象，节省内存，如果返回的是值，则需要拷贝对象，浪费内存
                                 //并且不再能够调用对象的方法，因为值传递，返回的是拷贝对象，而不是对象本身
    {
    this->age +=p.age;
    return *this; //返回对象本身用 *this this指向的是对象本身
    }
    int age;

};

void test1()
{
    Person p1(20);
    cout << "p1的年龄为：" << p1.age << endl;
}


//返回对象本身用 *this
void test2()
{
    Person p1(25);
    Person p2(20);
    p2.add1(p1).add1(p1).add1(p1); //return *this可以连续调用，因为p2被返回了，若没有return *this，没有返回
    cout << "p2的年龄为：" << p2.age << endl; //20+20=40

    

}




int main()
{
    system("chcp 65001");
    test1();
    test2();


    return 0;
}