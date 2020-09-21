
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    double m = 0;
    double n = 0;
    double result = 0;
    char next = 'N';
    char c;
    do
    {
        cout << "请先输入两个数，然后输入一个四则运算符( - 或者 +):\n";
        cin >> m >> n >> c;
        // getchar();
        // c = getchar();
        if (c == '+')
        {
            result = m + n;
        }
        else if (c == '-')
        {
            result = m - n;
        }
        else
        {
            cout << "你输入的运算符不正确" << endl;
        }
        cout << m << c << n << "=" << result << endl;
        cout << "是否继续?(y or Y继续,输入其他字符则结束程序)" << endl;
        cin >> next;
        if (next != 'Y' && next != 'y')
            next = 'N';
    } while (next == 'Y' || next == 'y');
    return 0;
}

//     char ch2 = 110;
//     char ch3 = 103;
//     char ch4 = 101;
//     char ch5 = 108;
//     char ch6 = 97;
//     char ch7 = 66;
//     char ch8 = 97;
//     char ch9 = 98;
//     char ch10 = 121;

//     //输出这些数对应的ASCII码
//     printf("%c,%c,%c,%c,%c,%c,%c,%c,%c,%c",ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10);

//     return 0;
// double sl, je,zhje,zk;

//     scanf("%d%d",&sl,&je);

//     zk = je * 0.15;
//     if (sl>10 || je >1000)
//     {
//         /* code */
//         printf("zk = %d  zkje = %d" ,zk,je*0.15);
//     }else
//     {
//         printf("zkje = %d" ,je);

//     }
