#include <iostream>
#include "a.h"

using namespace std;
int main(int argc, const char *argv[])

{

	int year, m, d, sum;

	year = 2020;
	m = 10;
	d = 12;

	//scanf("%d %d %d", &year, &m, &d);

	sum = number(year, m, d);

	printf("%d年%d月%d日是一年第%d天\n", year, m, d, sum);

	return 0;
}