#include<iostream>
using namespace std;

#pragma pack(1)
struct node 
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

#pragma pack(1)
template <class T>
class BinarySearchTree
{
    private:
        struct node *first;
        int iNo;

    public:
        BinarySearchTree();
        ~BinarySearchTree();

        void Inorder(struct node *first);
        void Preorder(struct node *first);
        void Postorder(struct node *first);
        void Insert(struct node **first,T iNo);
        T Count(struct node *first);
        bool Search(struct node *first,T iNo);

        T CountLeaf(struct node *first);
        T CountParent(struct node *first);

};

template <class T>
BinarySearchTree<T> :: BinarySearchTree()
{
    first = NULL;
    iNo = 0;
}

template <class T>
BinarySearchTree<T> :: ~BinarySearchTree()
{
    delete first;
}

// L    D   R
template <class T>
void BinarySearchTree<T> :: Inorder(struct node *first)
{
    if(first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n",first->data);
        Inorder(first->rchild);
    }
}

// D    L    R
template <class T>
void BinarySearchTree<T> :: Preorder(struct node *first)
{
    if(first != NULL)
    {
        printf("%d\n",first->data);
        Preorder(first->lchild);  
        Preorder(first->rchild);
    }
}

// D    L    R
template <class T>
void BinarySearchTree<T> ::  Postorder(struct node *first)
{
    if(first != NULL)
    {
        Postorder(first->lchild);  
        Postorder(first->rchild);
        printf("%d\n",first->data);

    }
}

template <class T>
void BinarySearchTree<T> :: Insert(struct node **first,T iNo)
{
    struct node *newn = NULL;
    struct node *temp = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(iNo == temp->data)
            {
                printf("Unable to insert as element is duplicate\n");
                free(newn);
                break;
            }
            
        }
    }
}

template <class T>
T BinarySearchTree<T> ::  Count(struct node *first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        Count(first->lchild);
        Count(first->rchild);
    }
    return iCount;
}

template <class T>
bool BinarySearchTree<T> :: Search(struct node *first,T iNo)
{
    bool bFlag = false;

    while(first != NULL)
    {
        if(iNo == first->data)
        {
            bFlag = true;
            break;
        }
        else if(iNo > first->data)
        {
            first = first->rchild;
        }
        else if(iNo < first->data)
        {
            first = first->lchild;
        }
    }
    return bFlag;
}

template <class T>
T BinarySearchTree<T> :: CountLeaf(struct node *first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        if(first->lchild == NULL && first->rchild == NULL)
        {
            iCount++;
        }

        CountLeaf(first->lchild);
        CountLeaf(first->rchild);
    }

    return iCount;
}

template <class T>
T BinarySearchTree<T> :: CountParent(struct node *first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        if(first->lchild != NULL || first->rchild != NULL)
        {
            iCount++;
        }

        CountParent(first->lchild);
        CountParent(first->rchild);
    }

    return iCount;
}

int main()
{
    struct node *head = NULL;
    int iRet = 0;
    BinarySearchTree<int> bobj;

    bobj.Insert(&head,11);
    bobj.Insert(&head,5);
    bobj.Insert(&head,17);
    bobj.Insert(&head,21);
    bobj.Insert(&head,4);
    bobj.Insert(&head,7);
    bobj.Insert(&head,15);


    printf("Inorder Display : \n");
    bobj.Inorder(head);

    iRet = bobj.Count(head);
    printf("Number of nodes are : %d\n",iRet);

    if(bobj.Search(head,25))
    {
        printf("25 is present in BST\n");
    }
    else
    {
        printf("25 is not present in BST\n");
    }

    iRet = bobj.CountLeaf(head);
    printf("Number of leaf nodes are : %d\n",iRet);
    
    iRet = bobj.CountParent(head);
    printf("Number of parent nodes are : %d\n",iRet);

    return 0;
}