#include<iostream>
#include<cstring>

using namespace std;
int leap(int a){

    

    if ((a % 4 == 0 && a%100!=0) || a%400 ==0) {

       return 1;

    }

    return 0;

}



//自定义函数number(),计算输入的日期为该年的第几天



int number(int year,int m,int d){

    int sum = 0,i;

   int a[12]= {31,28,31,30,31,30,31,31,30,31,30,31};//数据a存放平年每月的天数

   int b[12]= {31,29,31,30,31,30,31,31,30,31,30,31};//数据b存放闰年每月的天数

    

    if (leap(year) == 1) {                       //闰年循环累加前m-1个月的天数

       for (i = 0; i < m - 1; i++) {

           sum += b[i];

       }

    }else{

       for (i = 0; i < m - 1; i++) {            //平年循环累加前m-1个月的天数

           sum += a[i];

       }

    }

    

    sum += d;

    return sum;

    

    

}