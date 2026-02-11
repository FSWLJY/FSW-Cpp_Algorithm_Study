/*整形 int 4字节
  短整型short 2字节 （-32768~32767）
  长整型long 4字节（windows）
  长长整形 long long 8字节*/

  #include <iostream>
  using namespace std;
  int main(){
    //利用sizeof计算数据内存
     system("chcp 65001");
    
    short num1 = 10;
    cout << "short占用内存空间为：" << sizeof(num1) << "字节" << endl;
    
    int num2 = 20;
    cout << "int占用内存空间为：" << sizeof(num2) << "字节" << endl;
    
    long num3 = 30;
    cout << "long占用内存空间为：" << sizeof(num3) << "字节" << endl;
    
    long long num4 = 40;
    cout << "long long占用内存空间为：" << sizeof(num4) << "字节" << endl;
  }
  /*
   float 4字节（7位有效数字）
   double 8字节（15-16位有效数字）
  */
    
    
    
    
    



  
  
  

   