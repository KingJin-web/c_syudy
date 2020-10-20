#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    if (a > b)
        cout << "大的数字为" << a << " 小的数字为：" << b << endl;
    else
        cout << "大的数字为：" << b << " 小的数字为：" << a << endl;
}
int main()
{
    int a, b;
    cout << "请输入两个整数：";
    cin >> a >> b;

    int &ra = a;
    int &rb = b; //引用
    swap(ra, rb);
}