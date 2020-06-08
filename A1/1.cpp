#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[]{1997,11,6,520,2000,10,19};
    int len = sizeof(arr)/sizeof(int);

    for(int i=0; i<6; i++)
    {
        int min = i;
        for(int j=i+1; j<7; j++)
            if(arr[min] > arr[j])
                min = j;
        swap(arr[min], arr[i]);
    }

    cout << "原始数组：" << endl;
    for(int i=0; i<len; i++)
        cout << "   " << arr[i];
    cout << endl;

    int k;
    cout << "输入一个新的数字：";
    cin >> k;
    for(int i=0; i<len; i++)
    {
        if(k<arr[i]){                    // 从右向左 依次转移数值一直到插入点为止
                for(int j=len+1; j>i; j--)
//                    cout << arr[7];
                    arr[j] = arr[j-1];
                arr[i] = k;
        }
        break;


//        if(k<arr[i]){                              // 从插入点开始 依次像右转移数值
//                int temp = arr[i];
//                int temp2;
//                arr[i] = k;
//                for(int j=i+1; j<len+1; j++){
//                        cout << j << " ";
//                        temp2 = arr[j];
//                        arr[j] = temp;
//                        temp = temp2;
//                        cout << temp << " " << arr[7] << endl;
//                }
//                break;     // 这地方没有break 就会一直循环到  i=6为止，这个时候就会把1997和2000向右顶出去
//        }


    }
    len = len + 1;
    for(int i=0; i<len; i++)
        cout << "   " << arr[i];
    return 0;
}


