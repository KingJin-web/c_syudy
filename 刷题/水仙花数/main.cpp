#include <stdio.h>

int main()
{
	// 求三位数的水仙花数 如：153 = 1*1*1 + 5*5*5 + 3*3*3
	int i,num1,num2,num3,a;
	for (i = 100; i < 1000; i++)
	{
		num1 = i / 100;
		num2 = i / 10 % 10;
		num3 = i % 10;
		if (i==num1*num1*num1+num2*num2*num2+num3*num3*num3)
		{
            //a+=i;
			printf("%d\n", i);
            a+=i;
		}
      
	}
    printf("%d",a);
}
