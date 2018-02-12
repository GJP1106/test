#ifndef TREE_H
#define TREE_H
#include "Node.h"

class Tree
{
    public:
        Tree();                                                 //������
        ~Tree();                                                 //������
        Node *SearchNode(int nodeIndex);                          //��������Ѱ�ҽ��
        bool AddNode(int nodeIndex,int direction,Node *pNode);    //��ӽ��
        bool DeleteNode(int nodeIndex,Node *pNode);               //ɾ�����
        void PreorderTraversal();                                     //ǰ�����
        void InorderTraversal();                                   //�������
        void PostorderTraversal();                                 //�������
    private:
        Node *m_pRoot;
};

#endif // TREE_H
