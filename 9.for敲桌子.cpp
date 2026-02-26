#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    for (int i =1;i <=100;i++)
    {
        if (i%7==0)
        {
            cout << "敲桌子"<<endl;
        }
        else if(i%10==7)
        {
            cout << "敲桌子"<<endl;
        }
        else if(i/10==7)
        {
            cout << "敲桌子"<<endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}