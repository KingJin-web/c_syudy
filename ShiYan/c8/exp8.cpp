// 1.插入排序
// 2.冒泡排序
// 3.简单选择
// 4.快速排序
// 5.归并排序
#include <iostream>
using namespace std;

// 1.插入排序
void insertion_sort(int arr[], int len){
        int i,j,key;
        for (i=1;i<len;i++){
                key = arr[i];
                j=i-1;
                while((j>=0) && (arr[j]>key)) {
                        arr[j+1] = arr[j];
                        j--;
                }
                arr[j+1] = key;
        }
}

// 2.冒泡排序
void bubble_sort(int arr[], int len) {
        int i, j, temp;
        for (i = 0; i < len - 1; i++)
                for (j = 0; j < len - 1 - i; j++)
                        if (arr[j] > arr[j + 1]) {
                                swap(arr[j], arr[j + 1]);
                        }
}

int onePartion(int *a, int left, int right)
{
    int pivot = a[left];

    int i = left;
    int j = right;

    while (i < j) // i == j 交叉，结束
    {
        while (i < j && a[j] > pivot)
            j--;
        swap(a[i], a[j]);

        while (i < j && a[i] < pivot)
            i++;
        swap(a[i], a[j]);
    }

    return j;
}

// 4.快速排序
void quick_sort(int *a, int left, int right)
{
    if (left >= right)
        return;

    int k = onePartion(a, left, right); 

    quick_sort(a, left, k - 1);
    quick_sort(a, k + 1, right);
}

int main() {
        int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
        int len = (int) sizeof(arr) / sizeof(*arr);
        //insertion_sort(arr, len);
        bubble_sort(arr, len);
        //quick_sort(arr, 0, len - 1);
        int i;
        for (i = 0; i < len; i++)
                printf("%d ", arr[i]);
        return 0;
}