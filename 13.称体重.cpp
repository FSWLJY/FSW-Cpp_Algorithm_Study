#include <iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    int arr[5] = {300,350,200,400,250};
    //临时变量存储最大值。
    int max =0;
    for (int i =0; i<5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "最大体重为:" << max << "斤" <<endl;
   
     return 0;
}