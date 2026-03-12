#include <iostream>
using namespace std;

//new关键字的作用是动态分配内存，并返回指向该内存的指针。 目的再在堆区创建内存

int* func()
{
    int *p = new int(10); //在堆区创建一个int类型的变量，并初始化为10 new会返回一个指向该变量的指针（地址）
    return p; //返回指向该变量的指针
}

void test1()
{
    int *p = func(); //调用func函数，获取指向堆区变量的指针
    cout << "p指向的值为：" << *p << endl; //输出ptr指向的值，即10
    delete p; //释放指针所指向的内存，防止内存泄漏
}

void test2()
{
    int *arr =new int[10];//在堆区创建一个int类型的数组，包含10个元素 new会返回一个指向该数组首元素的指针（地址）
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1; //给数组元素赋值
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " "; //输出数组元素的值
    }
    delete[] arr; //释放数组所占的内存，防止内存泄漏
}

int main()
{
    system("chcp 65001");
    test1();
    test2();
    return 0;
}