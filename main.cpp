#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, c;
    char b;
    scanf("%f%c%f", &a, &b, &c);
    switch (b)
    {
    case '+':
        printf("%.2f", a + c);
        break;
    case '-':
        printf("%.2f", a - c);
        break;
    case '*':
        printf("%.2f", a*c);
        break;
    case '/':
        if (c == 0)
        {
            printf("data erro");
        }
        else
        {
            printf("%0.2f", a / c);
        }
    default:
        break;
    }
    return 0;
}

   // int main()
   // {
   //         printf("\n\
//          @\n\
//         / \\\n\
//         * *\n\
//         * *\n\
//         * *\n\
//     * * * * * *\n\
//   * * * * * * * *\n\
// * * * * * * * * * *\n\
//         * *\n\
//         * *\n\
//       * * * *\n\
//     * * * * * *\n");

   //         return 0;
   // }
