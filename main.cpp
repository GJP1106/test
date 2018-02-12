#include <iostream>

using namespace std;
#include "Tree.h"
/*************************************************************/
/* �������������ʾ��
    ������Ļ���������
    1.���Ĵ����ͳ���
    2.���н�������
    3.���н��������ɾ��
    4.���н��ı���

    BOOL CreateTree(Tree **pTree,Node *pRoot);          //������
    void DestroyTree(Tree *pTree);                      //������
    Node *SearchNode(Tree *pTree,int nodeIndex);        //��������Ѱ�ҽ��
    BOOL AddNode(Tree *pTree,int nodeIndex,int direction,Node *pNode);//��ӽ��
    BOOL DeleteNode(Tree *pTree,int nodeIndex,Node *pNode); //ɾ�����
    void TreeTraverse(Tree *pTree);

    ������������֮����㷨ת��

    int tree[n] 3  5 8  2 6 9 7     ���׽���±�*2+1 �ý����
                                    ���׽���±�*2+2 �ý����
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
