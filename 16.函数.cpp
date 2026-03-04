#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}




int main()
{
    system("chcp 65001");

    int result = add(5,6);
    cout << result << endl;

    return 0;
}