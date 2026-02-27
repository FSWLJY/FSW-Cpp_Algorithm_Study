#include <iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    int arr[5] = {1,2,3,4,3};
    
    cout << arr <<endl; // 打印数组首地址
    
    cout << "数组占用内存" << sizeof(arr)<< endl; // 打印数组占用内存大小
    cout << "数组元素个数" << sizeof(arr) / sizeof(arr[0]) << endl; // 打印数组元素个数

    
    
    return 0;
}