#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *p << " "; // 通过指针访问数组元素
        p++; // 指针移动到下一个元素
    }


    return 0;
}

