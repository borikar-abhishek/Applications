/*
Write a program which display addition of digits of element from singly linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10

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

int SumDigit(PNODE Head)
{
	int iSum = 0, iAdd = 0;
	int iDigit = 0;
	while(Head!=NULL)
	{
		while((Head->Data)!=0)
		{
		  iDigit = (Head->Data)%10;
		  iSum = iSum + iDigit;
		  (Head->Data) = (Head->Data)/10;
		  iAdd = iSum;
		}
		iSum = 0;
		Head = Head->Next;
		return iAdd;
	}
	
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
	
	iRet = SumDigit(First);
	printf("%d\t",iRet);
	return 0;
}