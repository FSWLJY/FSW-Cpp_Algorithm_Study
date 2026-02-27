#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int arr[5] = {1,3,2,4,5};
    int start = 0;
     
    int end = sizeof(arr) / sizeof(arr[0])-1;
    
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "元素逆置后为:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;    
}