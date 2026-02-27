#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    for (int i = 0;i<9-1;i++)
    {
        for (int j = 0;j<9-i-1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;    
            }
        }
    }
    cout << "冒泡排序后为:" << endl;
    for (int i = 0;i<9;i++)
    {
        cout << arr[i] << " ";
        cout << endl;

    }
    return 0;
}