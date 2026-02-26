#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");
    int num =rand() % 100 + 1; // 生成1~100之间的随机数
    // cout << num << endl; // 显示随机数
    int guess;  
    while (1)
   {
        cin >> guess; // 输入猜测值
        if (guess > num)
        {
            cout << "猜大了"<< endl;    
        }
        else if (guess < num)
        {
            cout << "猜小了"<< endl;    
        }
        else 
        {
            cout << "猜对了"<< endl;
            break;
        }
   }
}
    


    

