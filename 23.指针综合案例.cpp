#include <iostream>
using namespace std;

void bubbleSort(int *arr,int len)
{
    for (int i =0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;    
            }
        }
    }
}

void printArray(int *arr,int len)
{
    for (int i =0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    system("chcp 65001");

    int arr[] = {5,3,8,6,2,7,1,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,len);
    printArray(arr,len);



    return 0;
}
