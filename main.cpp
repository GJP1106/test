#include <iostream>

using namespace std;
#include "Tree.h"
/*************************************************************/
/* 二叉树（数组表示）
    完成树的基本操作：
    1.树的创建和撤销
    2.树中结点的搜索
    3.树中结点的添加与删除
    4.树中结点的遍历

    BOOL CreateTree(Tree **pTree,Node *pRoot);          //创建树
    void DestroyTree(Tree *pTree);                      //撤消树
    Node *SearchNode(Tree *pTree,int nodeIndex);        //根据索引寻找结点
    BOOL AddNode(Tree *pTree,int nodeIndex,int direction,Node *pNode);//添加结点
    BOOL DeleteNode(Tree *pTree,int nodeIndex,Node *pNode); //删除结点
    void TreeTraverse(Tree *pTree);

    关于数组与树之间的算法转换

    int tree[n] 3  5 8  2 6 9 7     父亲结点下标*2+1 该结点左
                                    父亲结点下标*2+2 该结点右
                3(0)
        5(1)           8(2)
    2(3)    6(4)   9(5)     7(6)
*/
/*********************************************************************/

int main()
{
    Node *node1 = new Node();
    node1->index = 1;
    node1->data = 5;

    Node *node2 = new Node();
    node2->index = 2;
    node2->data = 8;

    Node *node3 = new Node();
    node3->index = 3;
    node3->data = 2;

    Node *node4 = new Node();
    node4->index = 4;
    node4->data = 6;

    Node *node5 = new Node();
    node5->index = 5;
    node5->data = 9;

    Node *node6 = new Node();
    node6->index = 6;
    node6->data = 7;

    Tree *tree = new Tree();
    tree->AddNode(0,0,node1);
    tree->AddNode(0,1,node2);
    tree->AddNode(1,0,node3);
    tree->AddNode(1,1,node4);
    tree->AddNode(2,0,node5);
    tree->AddNode(2,1,node6);
    //tree->DeleteNode(5,NULL);
    //tree->DeleteNode(6,NULL);
    tree->DeleteNode(2,NULL);

    //tree->PreorderTraversal();
    //tree->InorderTraversal();
    tree->PostorderTraversal();
    delete tree;
    return 0;
}
