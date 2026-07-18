// Create a singly linear linkedlist and solve below question
// Count nodes containing even values

#include<stdio.h>
#include<stdlib.h>

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
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first ->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first ->next;
    }

    return iCount;
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        *first = newn;
    }

    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn =(PNODE)malloc(sizeof(NODE));
    
    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        *first = newn;
    }

    else
    {
        temp = *first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
    }
}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{
    PNODE temp = NULL;
    int iCount = 0;
    PNODE newn = NULL;

    iCount = Count(*first);

    if(iPos < 1 || iPos > iCount + 1)
    {
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
        int i = 0;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        temp = *first;

        for(i = 1;i < iPos - 1;i++) 
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        
    }
    
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    temp = *first;

    *first = (*first)->next;
    
    free(temp);
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    temp = *first;

    while(temp->next->next != NULL)    
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

void DeleteAtPos(PPNODE first,int iPos)
{

    PNODE temp = NULL;
    int iCount = 0;

    iCount = Count(*first);

    if(iPos < 1 || iPos > iCount)
    {
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
        int i = 0;
        PNODE target = NULL;
        temp = *first;

        for(i = 1;i < iPos - 1;i++) 
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = temp->next->next;

        free(target);
        
    }
}


int CountEven(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        if(((first->data)% 2) == 0)
        {
            iCount++;
        }
        first = first ->next;
    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,50);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);

    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);

    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);

    InsertAtPos(&head,81,3);

    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);

    DeleteAtPos(&head,3);

    Display(head);
    iRet = Count(head);
    printf("%d\n",iRet);

    iRet = CountEven(head);
    printf("Total even numbers are : %d\n",iRet);   

    return 0;
}