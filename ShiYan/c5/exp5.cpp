// 实验五  哈夫曼编码
// 1.实验目的
// 1、掌握哈夫曼编码原理；
// 2、熟练掌握哈夫曼树的生成方法；
// 3、掌握树形结构在实际问题中的应用
// 2.实验内容
// 1)对明文数据进行哈夫曼编码
// 2)对密文数据进行哈夫曼译码
//  要求实现功能：
//   统计字符出现频率
//   建树
//   建立编码表
//   编码
//   译码
//   编码长度分析 

 #include<iostream>
 #include<map>
 #include<algorithm>

 using namespace std;

 typedef struct node
 {
     struct node* lchild;
     struct node* rchild;
     int data;
     char ch;

 }HuffNode;
 
 typedef HuffNode* HuffTree;

 map<char,string> huffcode;//编码表 “a" -> "11100011 "
 map<char,int> values;

bool cmp(HuffTree t1,HuffTree t2)//比较两棵树 权值大小 
{
    return t1->data < t2->data;

}

HuffTree buildHuffTree( map<char,int> values)
{
    HuffTree* trees = new HuffTree[values.size()];
    int i = 0;
    for ( map<char,int>::iterator it = values.begin(); it != values.end(); it++)
    {
        HuffNode* root = new HuffNode();
        root->ch = it ->first;
        root->data = it->second;
        root->lchild = NULL;
        root->rchild = NULL; 
        trees[i++] = root;

    }
    int length = values.size();

    while (length > 1)
    {
        sort(trees,trees + length,cmp);

        HuffNode* root = new HuffNode();

        root->data = trees[0] ->data + trees[1] -> data;
        root->lchild = trees[0];
        root->rchild = trees[1];

        trees[0] = root;
        swap(trees[1],trees[length - 1]);
        length--;

    }
    return trees[0];

    
}



  
