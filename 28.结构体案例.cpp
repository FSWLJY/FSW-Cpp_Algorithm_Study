#include <iostream>
using namespace std;
#include <string>

struct Hero{

    string name;
    int age;
    string sex;
};

void bubbleSort( Hero hArray[],int len)
{
    for (int i=0;i<len-1;i++)
    {
        for (int j=0;j<len-i-1;j++)
        {
            if (hArray[j].age > hArray[j+1].age)
            {
                Hero temp = hArray[j];
                hArray[j] = hArray[j+1];
                hArray[j+1] = temp;
            }
        }
    }
}

void printHero(Hero hArray[],int len)
{
    for (int i =0;i<len;i++)
    {
        cout << "姓名" << hArray[i].name << " " << "年龄" << hArray[i].age << " " << "性别" << hArray[i].sex << endl;
    }
}

int main(){
    system("chcp 65001");

    Hero hArray[5] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",21,"男"},
        {"赵云",20,"男"},
        {"貂蝉",19,"女"}
    };
    int len = sizeof(hArray) / sizeof(hArray[0]);
    
    bubbleSort(hArray,len);
    printHero(hArray,len);



    return 0;
}
