#include <iostream>
#include <string>
using namespace std; 

struct Student{
    string sName;
    int score;
};

struct Teacher{

    string tName;
    Student sArray[5];
};

void allocateSpace(Teacher tArray[],int len)
{
    string tnameseed[] = {"张老师", "李老师", "王老师"};
    string snameseed[] = {"小明", "小红", "小刚", "小华", "小丽"};
    for(int i = 0; i < len; i++){
        tArray[i].tName = "Teacher_";
        tArray[i].tName += tnameseed[i];

        for(int j =0;j<5;j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += snameseed[j];
            int random = rand() % 61 +40; // 生成0到40之间的随机数
            tArray[i].sArray[j].score = random;
        }

}
}

void printInfo(Teacher tArray[],int len)
{
    for(int i = 0; i<len; i++){
        cout << "老师姓名" << tArray[i].tName << endl;
   
        
        
        for(int j =0;j<5;j++)
        {
            cout << "\t学生姓名" <<tArray[i].sArray[j].sName <<" " <<
            " 学生成绩 " << tArray[i].sArray[j].score << endl;
        }
     }
}

int main(){
    
    system("chcp 65001");

    Teacher tArray[3];
    
    int len = sizeof(tArray) / sizeof(tArray[0]);
    
    allocateSpace(tArray,len);
    
    printInfo(tArray,len);


   return 0; 
}