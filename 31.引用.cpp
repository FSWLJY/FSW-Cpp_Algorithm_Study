#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");
    int a = 10;
    int &b = a; // 引用变量b指向a


    return 0;
}