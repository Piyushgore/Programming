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
    // Type 1 while loop
    while(first != NULL)    
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    
    // Type 1 while loop
    while(first != NULL)    
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

    newn -> data = iNo;
    newn -> next = NULL;

    if(NULL == *first)      // LinkedList is empty
    {
        *first = newn;
    }
    else                    // LinkedList contains atleast one node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)      // LinkedList is empty
    {
        *first = newn;
    }
    else                    // LinkedList contains atleast one node
    {
        temp = *first;

        // Type 2 while loop
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{

}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                  // LinkedList is empty
    {
        return;
    }
    else if((*first) -> next == NULL)     // LinkedList contains 1 node
    {
        free(*first);
        *first = NULL;
    }
    else                                // LinkedList contains more than 1 node
    {
        temp = *first;
        *first = (*first) -> next;   
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                  // LinkedList is empty
    {
        return;
    }
    else if((*first) -> next == NULL)     // LinkedList contains 1 node
    {
        free(*first);
        *first = NULL;
    }
    else                                // LinkedList contains more than 1 node
    {
        temp = *first;

        // Type 3 while loop
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void DeleteAtPos(PPNODE first,int iPos)
{
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes is : %d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes is : %d\n",iRet);
    
    DeleteFirst(&head);
        
    Display(head);

    iRet = Count(head);
    printf("Number of nodes is : %d\n",iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes is : %d\n",iRet);

    return 0;
}