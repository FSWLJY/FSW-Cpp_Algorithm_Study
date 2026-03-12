#include <iostream>
#include <string>
using namespace std;
#define MAX 1000

void ShowMenu(){
    cout << "\t1.添加联系人" << endl;
    cout << "\t2.显示联系人" << endl;
    cout << "\t3.删除联系人" << endl;
    cout << "\t4.查找联系人" << endl;
    cout << "\t5.修改联系人" << endl;
    cout << "\t6.清空联系人" << endl;
    cout << "\t0.退出系统" << endl;
}

struct Person{
    string _name;
    // 1.性别男 2.性别女
    int _sex;
    int _age;
    string _phone;
    string _address;
};

struct AddressBooks{
    struct Person personArray[MAX];
    
    int m_size;//记录通讯录中人数
};

void addperson(AddressBooks *abs)
{
    if (abs->m_size == MAX)
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else 
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs ->personArray[abs ->m_size]._name = name;

        cout << "请输入性别：" << endl;
        cout << "1.男" << endl;
        cout << "2.女" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs ->personArray[abs ->m_size]._sex = sex;
                break;
            }
            cout << "输入错误，请重新输入！" << endl;
        }

        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs ->personArray[abs ->m_size]._age = age;

        cout << "请输入电话：" << endl;
        string phone;
        cin >> phone;
        abs ->personArray[abs ->m_size]._phone = phone;

        cout << "请输入地址：" << endl;
        string address;
        cin >> address;
        abs ->personArray[abs ->m_size]._address = address;

        abs ->m_size++;
        cout << "添加成功！" << endl;
        system("pause");
        system("cls");

    }


}

void ShowPerson(AddressBooks *abs)
{
    if (abs->m_size == 0)
    {
        cout << "通讯录为空！" << endl;
    }
    else 
    {
        for(int i=0;i<abs->m_size;i++)
        {
            cout << "姓名：" << abs->personArray[i]._name << "\t";
            cout << "性别：" << (abs->personArray[i]._sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArray[i]._age << "\t";
            cout << "电话：" << abs->personArray[i]._phone << "\t";
            cout << "地址：" << abs->personArray[i]._address << endl;

        }
    }
    system("pause");
    system("cls");
}

int Isexist(AddressBooks *abs, string name)
{
    for(int i=0;i<abs->m_size;i++)
    {
        if (abs->personArray[i]._name == name)
        {
            return i;
        }
    }
    return -1;
}

void deleteperson(AddressBooks *abs)
{
    cout << "请输入要删除的姓名：" << endl;
    string name;
    cin >> name;
    int ret = Isexist(abs, name);
    if(ret == -1)
    {
        cout << "要删除的联系人不存在！" << endl;
    }

    else 
    {
        for(int i=ret;i<abs->m_size;i++)
        {
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->m_size--;
        cout << "删除成功！" << endl;
    }
    system("pause");
    system("cls");

}

void FindPerson(AddressBooks *abs)
{
    cout << "请输入要查找的姓名：" << endl;
    string name;
    cin >> name;
    int ret = Isexist(abs, name);
    if(ret != -1)
    {
        cout << "姓名：" << abs->personArray[ret]._name << "\t";
        cout << "性别：" << (abs->personArray[ret]._sex == 1 ? "男" : "女") << "\t";
        cout << "年龄：" << abs->personArray[ret]._age << "\t";
        cout << "电话：" << abs->personArray[ret]._phone << "\t";
        cout << "地址：" << abs->personArray[ret]._address << endl;
    }
    else 
    {
        cout << "要查找的联系人不存在！" << endl;
    }
    system("pause");
    system("cls");
}

void modifyperson(AddressBooks *abs)
{
    cout << "请输入要修改的姓名：" << endl;
    string name;
    cin >> name;
    int ret = Isexist(abs, name);
    if(ret != -1)
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs ->personArray[abs ->m_size]._name = name;

        cout << "请输入性别：" << endl;
        cout << "1.男" << endl;
        cout << "2.女" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs ->personArray[abs ->m_size]._sex = sex;
                break;
            }
            cout << "输入错误，请重新输入！" << endl;
        }

        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs ->personArray[abs ->m_size]._age = age;

        cout << "请输入电话：" << endl;
        string phone;
        cin >> phone;
        abs ->personArray[abs ->m_size]._phone = phone;

        cout << "请输入地址：" << endl;
        string address;
        cin >> address;
        abs ->personArray[abs ->m_size]._address = address;
    }
    else
    {
        cout << "要修改的联系人不存在！" << endl;
    }
    system("pause");
    system("cls");
}

void clearperson(AddressBooks *abs)
{
    abs->m_size = 0;
    cout << "通讯录已清空！" << endl;
    system("pause");
    system("cls");
}
int main(){
    system("chcp 65001");
    int slect = 0;//创建y一个变量来接收用户输入的选项
     
    AddressBooks abs;//创建通讯录对象

    abs.m_size = 0;//初始化通讯录人数为0




    while (true)
    {
        ShowMenu();
        cin >> slect;
        switch(slect)
        {
            
            case 1:
                addperson(&abs);
                break;
            case 2:
                ShowPerson(&abs);
                break;
            case 3:
                deleteperson(&abs);
                break;
            case 4:
                FindPerson(&abs);
                break;
            case 5:
                modifyperson(&abs);
                break;
            case 6:
                clearperson(&abs);
                break;
            case 0:
                cout << "欢迎下次使用！" << endl;
            return 0;
            default:
                cout << "输入错误，请重新输入！" << endl;
                

        }
    }
    
    
    
    return 0;
}