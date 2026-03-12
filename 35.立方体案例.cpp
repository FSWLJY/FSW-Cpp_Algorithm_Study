#include <iostream>
using namespace std;

class Cube
{
public:
    void setL(int l)//设置长
    { m_L = l;}
    int getL()// 获取长
    {return m_L;}
    
    void setW(int w)
    {m_W = w;}
    int getW()
    {return m_W;}
   
    void setH(int h)
    {m_H = h;}
    int getH()
    {return m_H;}
    //计算面积
    int calauteS()
    {return 2*m_L*m_W+2*m_L*m_H+2*m_W*m_H;}

    //计算体积
    int calauteV()
    {return m_H*m_W*m_L;}
   //在类内利用布尔函数判断立方体体积是否相等
   bool sameInClass(Cube &h)
   {
    if(calauteV() == h.calauteV())
        {
            return true;
        }
    else 
    {return false;}
   }
   


private:
    int m_L;
    int m_W;
    int m_H;






};

bool same(Cube &c1,Cube &c2)
   {
    if(c1.calauteV() == c2.calauteV())
        {
            return true;
        }
    else 
    {return false;}
   }





int main()
{
    system("chcp 65001");
    Cube c1;
    c1.setL(5);
    c1.setH(8);
    c1.setW(10);
    cout << "c1的面积为" << c1.calauteS() << endl;
    cout << "c1的体积为" << c1.calauteV() << endl;
    Cube c2;
    c2.setL(8);
    c2.setH(5);
    c2.setW(9);
    bool ret =same(c1,c2);
    if(ret == 1)
    {
        cout << "c1和c2的体积相等" <<endl;
    }
    else
    {
        cout << "c1和c2的体积不相等"<< endl;
    }

    bool ret2 = c1.sameInClass(c2);
     if(ret2 == 1)
    {
        cout << "类内判断c1和c2的体积相等" <<endl;
    }
    else
    {
        cout << "类内判断c1和c2的体积不相等"<< endl;
    }





    return 0;
}