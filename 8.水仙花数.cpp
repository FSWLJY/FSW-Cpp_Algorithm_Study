#include <iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    //获取个位 153 %10
    //获取十位 153 /10
    //获取百位 153 /100   
    int num = 100;
    do
    {
      int a,b,c = 0;
       a = num % 10; // 个位 
       b = num / 10 % 10; // 十位
       c = num / 100; // 百位
       if(a*a*a + b*b*b + c*c*c == num)
       {
              cout << num << endl;
       }
       num++;
    } while (num < 1000);
       
    



    

}