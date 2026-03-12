#include <iostream>
using namespace std;

class Person 
{
    //1.构造函数 ：
    //没有返回值不用写void
    //函数名与类相同
    //可以有参数，可以发生重载
    //创建对象时，构造函数会自动调用，而且只调用一次
public:
      Person()
    {
        cout <<"构造函数的调用" << endl;
    }

    //2.析构函数：
    //没有返回值，不用写void
    //函数名和类名相同，在名称前添加
    //析构函数不可以有参数，不可以重载
    //对象在销毁前会自动调用，且只调用一次
    ~Person()
    {
        cout <<"析构函数的调用" << endl;
    }

};

void test01()
{
    Person p;
}

int main()
{
    system("chcp 65001");
    
    test01();


    return 0;
}