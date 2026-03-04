#include <iostream>
using namespace std;

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//地址传递 
int main()
{
    system("chcp 65001");




    return 0;
}