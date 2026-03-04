#include <iostream>
using namespace std;
//无参数无返回值
void test1()
{
    cout << "这是test1函数" << endl;
}
//有参数无返回值
void test2(int a)
{
    cout << "这是test2函数，参数a的值为:" << a << endl;
}

//无参数有返回值
int test3()
{
    cout << "这是test3函数" << endl;
    return 100;
}

//有参数有返回值
 int test(int a)
 {
        cout << "这是test函数，参数a的值为:" << a << endl;
        return  100;
 }

int main()
{
    system("chcp 65001");
    test1();
    test2(10);
    int result = test3();
    cout << "test3函数的返回值为：" << result << endl;
    int result2 = test(20);
    cout << "test函数的返回值为：" << result2 << endl;


    return 0;
}