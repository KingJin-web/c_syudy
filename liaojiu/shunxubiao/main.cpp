#include<stdio.h>
#include"Sequencelist.cpp"


ElementType dataArray[] = {
    {1, 1},
    {2, 2},
    {3, 3},
    {4, 4}
};
void PrintList(SeqList * seqList);
void TestSeqenceList();



void TestSeqentList(){
    SeqList seqList;    //要操作的顺序表
    ElementType *delElement;
    InitList(&seqList, dataArray, sizeof(dataArray) / sizeof(dataArray[0]));
    printf("初始化后\n");
    PrintList(&seqList);

}

void PrintList(SeqList * seqList)
{
    for(int i = 0; i < seqList->length; i++){
        printf("%d\t%d\n", seqList->datas[i].id, seqList->datas[i].name);
    }
}

int main(){
    TestSeqenceList();
    return 0;
}