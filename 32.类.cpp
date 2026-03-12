#include <iostream>
using namespace std;
static double pi = 3.1415926;

class circle
{
    //访问权限

    public:

    //属性
    
    int m_r;//半径

    //行为
    //获取圆的周长

    double getZC()
    {
        return 2*pi*m_r;
    }
};


int main()
{
    system("chcp 65001");
circle c1, c2;
c1.m_r = 5;
c2.m_r = 7;
cout << "c1的半径为：" << c1.m_r << endl;
cout << "c2的半径为：" << c2.m_r << endl;
cout << "c1的周长为：" << c1.getZC() << endl;
cout << "c2的周长为：" << c2.getZC() << endl;


    return 0;
}