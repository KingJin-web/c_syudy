#ifndef DATAELEMENT_H_INCLUDED
#define DATAELEMENT_H_INCLUDED

#include<stdio.h>

#define MAX_SIZE 255
 #define TRUE 1
 #define FALSE 0

 //1、定义数据元素
 //typedef int ElementType;
 /*
  * datas = {{1, ""}, {2, ""}, {3, ""}};
  */
 typedef struct{
    int id;
    int name;
 }ElementType;

 //2、定义顺序表结构
 typedef struct{
    ElementType datas[MAX_SIZE];    //顺序表中的数据元素集合
    int length;                     //当前顺序表中的元素个数
 }SeqList;

/**
 * 初始化顺序表
 * @param seqList   要初始化的顺序表
 * @param elemArary 初始化时要添加的元素内容数组
 * @param length    初始化时添加的元素个数
 */
void InitList(SeqList * seqlist, ElementType * elemArry,int length);
/**
 * 向顺序表中的index下标处插入某个元素
 * @param seqList
 * @param index     要插入的下标
 * @param element   要插入的元素
 */
void InsertElement(SeqList * seqlist,int index,ElementType element);


#endif