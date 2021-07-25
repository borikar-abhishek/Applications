/*
Write a program which return smallest element from singly linear linked
list.
Function Prototype :
int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	newn->Data = No;
	newn->Next = NULL;
	
	if(*Head==NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->Next=*Head;
		*Head = newn;
	}
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->\t",Head->Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}

int Minimum(PNODE Head)
{
	int iMin = Head->Data;
	while(Head!=NULL)
	{
		if(iMin >= Head->Data)
		{
			iMin = Head->Data;
		}
		Head = Head->Next;
	}
	return iMin;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	int No = 0;
	
	InsertFirst(&First,110);
	InsertFirst(&First,230);
	InsertFirst(&First,20);
	InsertFirst(&First,240);
	
	printf("Actual nodes are\n ");
	Display(First);
	
	iRet = Minimum(First);
	printf("Minimum is : %d",iRet);
	
	
	return 0;
}