C语言允许为一个数据类型起一个新的别名，就像给人起“绰号”一样。

起别名的目的不是为了提高程序运行效率，而是为了编码方便。例如有一个结构体的名字是 stu，要想定义一个结构体变量就得这样写：
struct stu stu1;

struct 看起来就是多余的，但不写又会报错。如果为 struct stu 起了一个别名 STU，书写起来就简单了：
STU stu1;

这种写法更加简练，意义也非常明确，不管是在标准头文件中还是以后的编程实践中，都会大量使用这种别名。

使用关键字 typedef 可以为类型起一个新的别名。typedef 的用法一般为：
```typedef  oldName  newName;```

oldName 是类型原来的名字，newName 是类型新的名字。例如：
````c++
typedef int INTEGER;
INTEGER a, b;
a = 1;
b = 2;
````
``INTEGER a, b;等效于int a, b;。``

typedef 还可以给数组、指针、结构体等类型定义别名。先来看一个给数组类型定义别名的例子：
``typedef char ARRAY20[20];``

表示 ARRAY20 是类型char [20]的别名。它是一个长度为 20 的数组类型。接着可以用 ARRAY20 定义数组：
`ARRAY20 a1, a2, s1, s2;`

它等价于：
>`char a1[20], a2[20], s1[20], s2[20];`

注意，数组也是有类型的。例如char a1[20];定义了一个数组 a1，它的类型就是 char [20]，这一点已在VIP教程《数组和指针绝不等价，数组是另外一种类型》中讲解过。

又如，为结构体类型定义别名：
```c++
typedef struct stu{
    char name[20];
    int age;
    char sex;
} STU;
```

STU 是 struct stu 的别名，可以用 STU 定义结构体变量：
>``STU body1,body2;``

它等价于：
``struct stu body1, body2;``


再如，为指针类型定义别名：
>`typedef int (*PTR_TO_ARR)[4];`

表示 PTR_TO_ARR 是类型int * [4]的别名，它是一个二维数组指针类型。接着可以使用 PTR_TO_ARR 定义二维数组指针：
PTR_TO_ARR p1, p2;

按照类似的写法，还可以为函数指针类型定义别名：
>`typedef int (*PTR_TO_FUNC)(int, int);
PTR_TO_FUNC pfunc;`

【示例】为指针定义别名。
```c++
#include <stdio.h>
typedef char (*PTR_TO_ARR)[30];
typedef int (*PTR_TO_FUNC)(int, int);
int max(int a, int b){
    return a>b ? a : b;
}
char str[3][30] = {
    "http://c.biancheng.net",
    "C语言中文网",
    "C-Language"
};
int main(){
    PTR_TO_ARR parr = str;
    PTR_TO_FUNC pfunc = max;
    int i;
   
    printf("max: %d\n", (*pfunc)(10, 20));
    for(i=0; i<3; i++){
        printf("str[%d]: %s\n", i, *(parr+i));
    }
    return 0;
}
```
运行结果：
>max: 20 <br>
>str[0]: http://c.biancheng.net<br>
>str[1]: C语言中文网<br>
>str[2]: C-Language
