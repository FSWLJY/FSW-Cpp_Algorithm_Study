/*
   float 4字节（7位有效数字）
   double 8字节（15-16位有效数字）
  */
 #include <iostream>   
using namespace std;

int main()
{
    system("chcp 65001");
    
    float f1 = 3.14f; // 在浮点数后面加上f，表示这是一个float类型的常量
    
    double d1 = 3.145926; // 这是一个double类型的常量，但是默认情况下只输出六位有效数字！
    
    cout << "f1 = " << f1 << endl;
    
    cout << "d1 = " << d1 << endl;

    float f2 = 3e2;
    cout << "f2 = " << f2 << endl; // 输出300
    
    float f3 = 3e-2;
    cout << "f3 = " << f3 << endl; // 输出0.03
    
    return 0;
}