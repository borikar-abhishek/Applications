/*
Write a program which return second maximum element from singly linear linked list.
Function Prototype :
int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
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

int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head!=NULL)
	{
		iCnt++;
		Head = Head->Next;
	}
	return iCnt;
}
int SecMaximum(PNODE Head)
{
	int iFirst,iSecond = 0;
	PNODE Temp = Head;
	while(Temp!=NULL)
	{
		if(Temp->Data > iFirst)
		{
			iSecond = iFirst;
			iFirst = Temp->Data;
		}
		else if(Temp->Data > iSecond)
		{
			iSecond = Temp->Data;
			Temp = Temp->Next;
		}
	}
	return iSecond;
}
	

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	int No = 0;
	
	InsertFirst(&First,41);
	InsertFirst(&First,32);
	InsertFirst(&First,20);
	InsertFirst(&First,11);
	
	printf("Actual nodes are\n ");
	Display(First);
	iRet = SecMaximum(First);
	printf("Second maximum number is : %d ",iRet);
	return 0;
}