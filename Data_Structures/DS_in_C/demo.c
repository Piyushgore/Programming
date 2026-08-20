#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(NULL != first)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL\n");

}

int Count(PNODE first)
{
    int iCount = 0;
    while(NULL != first)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->next = NULL;
    }
}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{
    int iCount = 0,i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    iCount = Count(*first);
    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first,iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first,iNo);
    }
    else
    {
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));

        newn ->data = iNo;
        newn->next = NULL;

        for(i = 1;i < (iPos - 1);i++)
        {
            temp = temp->next;
        }
        newn-> next = temp ->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

}

void DeleteAtPos(PPNODE first,int iPos)
{
    int iCount = 0,i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);
    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first);
    }
    else
    {

        temp = *first;

        for(i = 1;i < (iPos - 1);i++)
        {
            temp = temp->next;
        }
        
        target = temp -> next;
        temp ->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes : %d\n",iRet);

    InsertLast(&head,101);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes : %d\n",iRet);  
    
    DeleteFirst(&head);
    DeleteLast(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes : %d\n",iRet);  

    InsertAtPos(&head,41,2);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes : %d\n",iRet);  

    DeleteAtPos(&head,2);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes : %d\n",iRet);  

    return 0;
}